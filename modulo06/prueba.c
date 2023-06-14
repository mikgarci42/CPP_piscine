#include "microshell.h"

int	write_error(char *string, char *argv)
{
	while (*string)
		write(2, string++, 1);
	if (argv)
	{
		while(*argv)
			write(2, argv++, 1);
	}
	write(2, "\n", 1);
	return (1);
}

int	ft_exe(int i, int tmp_fd, char **argv, char **env)
{
	argv[i] = NULL;
	dup2(tmp_fd, STDIN_FILENO);
	close(tmp_fd);
	execve(argv[0], argv, env);
	return(write_error("error: cannot execute ", argv[0]));
}

void exec_command(int tmp_fd, char **argv, char **env)
{
	int i = 0;
	int fd[2];

	while (argv[i] && argv[i + 1])
	{
		argv = &argv[i + 1];
		i = 0;
		while (argv[i] && strcmp(argc[i], ";"))
			i++;
		if(strcmp(argv[i], "cd") == 0)
		{
			if (i != 2)
				write_error("error: cd: bad arguments", NULL);
			if (chdir(argv[1]) != 0)
				write_error("error: cd: cannot change directory to ", argv[1]);
		}
		if ( i != 0 && (argv[i] == NULL || strcmp(argv[i], ";")))
		{
			if (fork() == NULL)
			{
				if (ft_exe(i, tmp_fd, argv, env))
					_exit(1);
			}
			else
			{
				close (tmp_fd);
				while(waitpid(-1, NULL, WUNTRANCED) != -1)
			}
		}
		if ( i != 0 && strcmp(argv[i], "|"))
		{
			pipe(fd);
			if (fork() == NULL)
			{
			}
			else
			{
				close(fd[0]);
				close(fd[1]);
				tmp_fd = fd[0];
			}
		}
	}
	close (tmp_fd);
}

int	main(int argc, char **argv, char **env)
{
	int tmp_fd;

	(void) argc;
	tmp_fd = dup(STDIN_FILENO);
	exec_command(tmp_fd, argc, env);
	return(0);
}

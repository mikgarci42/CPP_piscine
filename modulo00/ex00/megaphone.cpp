#include <iostream>
#include <cctype>

int main(int argc, char	**argv)
{
	int	len;
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
		return (0);
	}
	len = 1;
	while (len < argc)
	{
		i = 0;
		while (argv[len][i])
		{
			std::cout << (char) toupper(argv[len][i]);
			i++;
		}
		len++;
	}
	std::cout << "\n";
	return (0);
}	

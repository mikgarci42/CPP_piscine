#include <fstream>
#include <iostream>

int	error(std::string err)
{
	std::cout << "Error: " << err << std::endl;
	return(1);
}

void	ft_is_replace(std::string s1, std::string s2, std::ofstream &os, std::string line)
{
	std::size_t	pos;


	pos = line.find(s1);
	while (pos <= line.length())
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.length() + 1);
	}
	os << line << std::endl;
	return ;
}

int	main(int argc, char** argv)
{
	std::ifstream is(argv[1], std::ifstream::in);
	std::ofstream os("text.replace", std::ofstream::out);
	std::string line;

	if (argc != 4)
		return(error("Wrong number of arguments"));
	if (!argv[1])
		return(error("Empty file"));
	if (!argv[2] || !argv[3])
		return(error("Empty string"));
	if (!is.is_open() || !os.is_open())
		return (error("File error"));
	while (std::getline(is, line))
		ft_is_replace(argv[2], argv[3], os, line);
	is.close();
	os.close();
	return (0);
}

#include <iostream>
#include <string>
#include <stdexcept>

class Casting
{
	private:
		std::string	_input;
	public:
		 Casting(const std::string& input) : _input(input) {}
		char	toChar() const {
			return static_cast<char>(_input[0]);
		}
};

int main(int argc, char **argv) 
{
	if (argc != 2)
		return 1;
	Casting casting(argv[1]);
	std::cout << "Casteo a char: " << casting.toChar() << std::endl;
}


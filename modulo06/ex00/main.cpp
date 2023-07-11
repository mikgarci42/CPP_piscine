#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>

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
/*	if (argc != 2)
		return 1;
	Casting casting(argv[1]);
	std::cout << "Casteo a char: " << casting.toChar() << std::endl;*/
char abc[] = "-inf";
  double d1, d2;
  int	d;
  char	a;
  std::stringstream os;

  d2 = strtod (abc, NULL);
  d = static_cast<int>(d2);
  d1 = static_cast<float>(d2);
  a = static_cast<char>(d);
	if ( d > 32 && d < 127)
	       	printf("char: '%c'\n", a);
	else
		printf("char: impossible\n");
  printf("int: %d\n", d);
  printf("float: %.1ff\n", d1);
  printf("double: %.1f\n", d2);
  return 0;
}


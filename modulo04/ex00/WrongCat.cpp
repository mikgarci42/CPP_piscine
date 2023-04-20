#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat has been created\n";
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat has been deleted\n";
}

WrongCat & WrongCat::operator=(const WrongCat &rhs) 
{

	this->type = rhs.getType();
	return *this;
}

WrongCat::WrongCat(const WrongCat &src) {
	*this = src;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound\n";
	return ;
}

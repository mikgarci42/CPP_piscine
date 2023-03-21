#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed (int  val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = val * ((int) 1 << Fixed::_num);
}

Fixed::Fixed (float d)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(d * (float) (1 << Fixed::_num));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed & rhs) 
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return((float) this->getRawBits() / ((float) (1 << Fixed::_num)));
}

int	Fixed::toInt(void) const
{
	return((int)( this->getRawBits() / ((int) (1 << Fixed::_num))));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	//a = (double) rhs.getRawBits() / ((double) (1 << Fixed::_num));
	o << rhs.toFloat();
	return o;
}

int	 Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int a)
{
	this->_value = a;
}

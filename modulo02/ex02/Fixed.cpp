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
	o << rhs.toFloat();
	return o;
}

bool Fixed::operator > (const Fixed rhs) const 
{
	return (this->_value > rhs.getRawBits());
}

bool Fixed::operator < (const Fixed rhs) const 
{
	return (this->_value < rhs.getRawBits());
}

bool Fixed::operator >= (const Fixed rhs) const 
{
	return (this->_value >= rhs.getRawBits());
}

bool Fixed::operator <= (const Fixed rhs) const 
{
	return (this->_value <= rhs.getRawBits());
}

bool Fixed::operator == (const Fixed rhs) const 
{
	return (this->_value == rhs.getRawBits());
}

bool Fixed::operator != (const Fixed rhs) const 
{
	return (this->_value != rhs.getRawBits());
}

Fixed Fixed::operator + (const Fixed rhs) const
{
	Fixed	a;

	a.setRawBits(this->_value + rhs.getRawBits());
	return (a.toFloat());
}

Fixed Fixed::operator - (const Fixed rhs) const
{
	Fixed	a;

	a.setRawBits(this->_value - rhs.getRawBits());
	return (a.toFloat());
}

Fixed Fixed::operator * (const Fixed rhs) const
{
	Fixed	a;

	(void) rhs;
	a.setRawBits((this->_value * rhs.getRawBits()) >> Fixed::_num);
	return (a.toFloat());
}

Fixed Fixed::operator / (const Fixed rhs) const
{
	Fixed	a;

	a.setRawBits((this->_value / rhs.getRawBits()) >> Fixed::_num);
	return (a.toFloat());
}

Fixed Fixed::operator ++ (void)
{
	Fixed temp;
	temp.setRawBits(++this->_value);
	return temp;
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp;
	temp.setRawBits(this->_value++);
	return temp;
}

Fixed Fixed::operator -- (void)
{
	Fixed temp;
	temp.setRawBits(--this->_value);
	return temp;
}

Fixed Fixed::operator -- (int)
{
	Fixed temp;
	temp.setRawBits(this->_value--);
	return temp;
}

Fixed	& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
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

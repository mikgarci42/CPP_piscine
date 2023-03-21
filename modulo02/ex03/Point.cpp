#include "Point.hpp"

Point::Point(void)
{
//	std::cout << "Default Point constructor called" << std::endl;
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point (Fixed const a, Fixed const b)
{
//	std::cout << "Point Fixed constructor called" << std::endl;
	this->x = a;
	this->y = b;
}

Point::Point(Point const &src)
{
//	std::cout << "Copy Point constructor called" << std::endl;
	*this = src;
}

Point::~Point()
{
//	std::cout << "Point Destructor called" << std::endl;
}

Point &Point::operator = (const Point & rhs) 
{
//	std::cout << "Point Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->x = rhs.x.toFloat();
		this->y = rhs.y.toFloat();
	}
	return *this;
}

Fixed	Point::getFixedX(void) const
{
	return (this->x);
}

Fixed	Point::getFixedY(void) const
{
	return (this->y);
}

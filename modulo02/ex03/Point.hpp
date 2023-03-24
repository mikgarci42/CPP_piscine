#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class	Point
{
	private:

		Fixed	x;
		Fixed	y;

	public:
	
		Point	(void);
		Point	(Fixed const a, Fixed const b);
		Point	( Point const  & src);
		~Point	(void);

		Point & operator=(const Point  & rhs);
		
		Fixed	getFixedX(void) const;
		void	setFixedX(Fixed const x);
		Fixed	getFixedY(void) const;
		void	setFixedY(Fixed const y);

};

std::ostream & operator<<(std::ostream & o, Point const & rhs);

#endif

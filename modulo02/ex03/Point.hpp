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
		Fixed	getFixedY(void) const;

/*		bool	operator > (const Point rhs) const;
		bool	operator < (const Point rhs) const;
		bool	operator >= (const Point rhs) const;
		bool	operator <= (const Point rhs) const;
		bool	operator == (const Point rhs) const;
		bool	operator != (const Point rhs) const;
		Point	operator + (const Fixed rhs) const;
		Point	operator - (const Fixed rhs) const;
		Point	operator * (const Fixed rhs) const;
		Point	operator / (const Fixed rhs) const;
		Point	operator ++ (void);
		Point	operator ++ (int);
		Point	operator -- (void);
		Point	operator -- (int);

	   	int 	getRawBits(void) const;
		void	setRawBits(int a);
		float	toFloat(void) const;
		float	toInt(void) const;
		static Point	&max(Fixed & a, Fixed & b);
		static Point	&min(Fixed & a, Fixed & b);

		static const Point	&max(const Fixed & a, const Fixed & b);
		static const Point	&min(const Fixed & a, const Fixed & b);*/
};

std::ostream & operator<<(std::ostream & o, Point const & rhs);

#endif

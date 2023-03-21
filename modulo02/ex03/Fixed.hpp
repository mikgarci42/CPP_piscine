#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	private:

		int					_value;
		static const int	_num = 8;		

	public:
	
		Fixed	(void);
		Fixed	(int val);
		Fixed	(float d);
		Fixed	( Fixed const  & src);
		~Fixed	(void);

		Fixed & operator=(const Fixed  & rhs);
		bool	operator > (const Fixed rhs) const;
		bool	operator < (const Fixed rhs) const;
		bool	operator >= (const Fixed rhs) const;
		bool	operator <= (const Fixed rhs) const;
		bool	operator == (const Fixed rhs) const;
		bool	operator != (const Fixed rhs) const;
		Fixed	operator + (const Fixed rhs) const;
		Fixed	operator - (const Fixed rhs) const;
		Fixed	operator * (const Fixed rhs) const;
		Fixed	operator / (const Fixed rhs) const;
		Fixed	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed	operator -- (void);
		Fixed	operator -- (int);

	   	int 	getRawBits(void) const;
		void	setRawBits(int a);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&max(Fixed & a, Fixed & b);
		static Fixed	&min(Fixed & a, Fixed & b);

		static const Fixed	&max(const Fixed & a, const Fixed & b);
		static const Fixed	&min(const Fixed & a, const Fixed & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif

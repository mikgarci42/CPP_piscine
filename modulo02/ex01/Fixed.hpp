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

	   	int 	getRawBits(void) const;
		void	setRawBits(int a);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif

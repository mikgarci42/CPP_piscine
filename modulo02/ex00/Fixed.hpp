#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	private:

		int					_value;
		static const int	_num = 8;		

	public:
	
		Fixed(void);
		Fixed(Fixed  & src);
		~Fixed(void);

		Fixed & operator=(Fixed  & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int a);
};

#endif

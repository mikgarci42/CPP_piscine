#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &);
		WrongCat& operator=(WrongCat const &);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif

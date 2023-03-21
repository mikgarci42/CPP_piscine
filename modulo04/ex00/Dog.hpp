#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &);
		Dog& operator=(Dog const &);
		~Dog(void);

		virtual void	makeSound(void) const;
};

#endif

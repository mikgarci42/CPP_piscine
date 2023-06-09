#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat(void);

		virtual void	makeSound(void) const;
};

#endif

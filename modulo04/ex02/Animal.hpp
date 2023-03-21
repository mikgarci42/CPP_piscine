#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		virtual ~Animal(void);

		void		setType(std::string type);
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &);
		WrongAnimal& operator=(WrongAnimal const &);
		virtual ~WrongAnimal(void);

		void		setType(std::string const type);
		std::string	getType(void) const;
		void	makeSound(void) const;
};

#endif

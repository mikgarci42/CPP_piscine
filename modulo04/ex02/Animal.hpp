#ifndef AANIMAL_H
# define AANIMAL_H
# include <iostream>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &);
		AAnimal& operator=(AAnimal const &);
		virtual ~AAnimal(void);

		void		setType(std::string type);
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif

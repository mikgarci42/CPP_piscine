#ifndef AMATERIA_H
# define AMATERIA_H
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);

		AMateria & operator=(AMateria const & rhs);

		std::string const & getType(void) const;

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter & target);
};

std::ostream &operator<<(std::ostream &out, AMateria const &fixed);

#endif

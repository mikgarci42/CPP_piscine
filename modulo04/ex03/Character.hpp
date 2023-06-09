#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *wp[4];

	public:
		Character(std::string name);
		Character(Character const & src);
		~Character(void);

		Character & operator=(Character const & rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif

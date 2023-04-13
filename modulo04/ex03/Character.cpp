#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->wp[i] = NULL;
	std::cout << name << " character created\n";
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void)
{	
	for (int i = 0; i < 4; i++)
	{
		if (this->wp[i])
			delete this->wp[i];
	}
	std::cout << this->name << " character deleted\n";
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
		this->name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs.wp[i])
			this->wp[i] = rhs.wp[i]->clone();
		else
			this->wp[i] = NULL;
	}
	return *this;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->wp[i])
		{
			this->wp[i] = m;
			return ;
		}
	}
	std::cout << "Full equiped\n";
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 4)
	{
		this->wp[idx] = NULL;
		std::cout << "Weapon unequiped\n";
	}
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->wp[idx])
		this->wp[idx]->use(target);
	else
		std::cout << "* No weapon * " << std::endl;
	return ;	
}

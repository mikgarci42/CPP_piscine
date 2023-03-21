#include "Weapon.hpp"
#include <string>

class	HumanB
{
	private:
		Weapon*	_Type;
		std::string	_name;

	public:
	//	HumanB(std::string name, Weapon type);
		HumanB(std::string name);
		~HumanB();

		std::string getWeapon(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
		std::string getName(void);
};

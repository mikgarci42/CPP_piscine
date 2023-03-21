#include "Weapon.hpp"
#include <string>

class	HumanA
{
	private:
		Weapon	&_Type;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon &type);
		~HumanA();

		std::string	const &getWeapon(void);
		void	setWeapon(Weapon weapon);
		void	attack(void);
		std::string getName(void);
};

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon const &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (!_weapon)
		std::cout << "rah makayn la slah la walo" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

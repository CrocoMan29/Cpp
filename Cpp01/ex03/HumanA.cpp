#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const &weapon):_name(name), _weapon(weapon){
}

HumanA::~HumanA()
{
}

void HumanA::Attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

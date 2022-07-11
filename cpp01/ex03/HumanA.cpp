#include "HumanA.hpp"

HumanA::HumanA(str name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{
	std::cout << this->_name << " has died" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

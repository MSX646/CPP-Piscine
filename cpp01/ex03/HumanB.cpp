#include "HumanB.hpp"

HumanB::HumanB(str name) : _name(name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
	std::cout << this->_name << " has died" << std::endl;
}

void HumanB::attack()
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
		return;
	}
	std::cout << "There is no weapon to attack with :(" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

#include "Weapon.hpp"

Weapon::Weapon(str type) : _type(type)
{}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

const str &Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(str type)
{
	this->_type = type;
}

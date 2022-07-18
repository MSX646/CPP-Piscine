#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hp(10), _enrg(10), _attck(0)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(str name) : _name(name), _hp(10), _enrg(10), _attck(0) 
{
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hp = src._hp;
		this->_enrg = src._enrg;
		this->_attck = src._attck;
	}
	return *this;
}

void ClapTrap::attack(const str & target)
{
	if (this->_hp > 0 && this->_enrg > 0)
	{
		std::cout << this->_name << " attacks " << target << " for " << this->_attck << " damage" << std::endl;
		this->_enrg--;
		return;
	}
	std::cout << "Not enough energy or health" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << this->_name << " takes " << amount << " damage" << std::endl;
		this->_hp -= amount;
		return;
	}
	std::cout << "Not enough energy or health" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_enrg > 0)
	{
		std::cout << this->_name << " repaired for " << amount << "hp" << std::endl;
		this->_hp += amount;
		this->_enrg--;
		return;
	}
	std::cout << "Not enough energy or health" << std::endl;
}

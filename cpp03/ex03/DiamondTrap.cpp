#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap: default created" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_enrg = ScavTrap::_enrg;
	this->_attck = FragTrap::_attck;
}

DiamondTrap::DiamondTrap(str name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap: " << this->_name <<" created" << std::endl;
	this->_hp = FragTrap::_hp;
	this->_enrg = ScavTrap::_enrg;
	this->_attck = FragTrap::_attck;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src)
{
	std::cout << "DiamondTrap: copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destroyed" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & src)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hp = src._hp;
		this->_enrg = src._enrg;
		this->_attck = src._attck;
	}
	return *this;
}

void DiamondTrap::attack(const str & target)
{
	ScavTrap::attack(target);	
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::info()
{
	std::cout << this->_name << std::endl;
	std::cout << "HP: " << this->_hp << std::endl;
	std::cout << "Damage: " << this->_attck << std::endl;
	std::cout << "Energy: " << this->_enrg << std::endl;
}

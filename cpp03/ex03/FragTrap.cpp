#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: default created" << std::endl;
	this->_hp = 100;
	this->_enrg = 100;
	this->_attck = 30;
}

FragTrap::FragTrap(str name) : ClapTrap(name)
{
	std::cout << "FragTrap: " << this->_name <<" created" << std::endl;
	this->_hp = 100;
	this->_enrg = 100;
	this->_attck = 30;
}

FragTrap::FragTrap(const FragTrap & src)
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & src)
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

void FragTrap::attack(const str & target)
{
	if (this->_hp > 0 && this->_enrg > 0)
	{
		std::cout << "FragTrap: " << this->_name << " attacks "; 
		std::cout << target << " for " << this->_attck << " damage" << std::endl;
		this->_enrg--;
		return;
	}
	std::cout << "Not enough energy or health" << std::endl;
}

void FragTrap::highFiveGuys()
{
	if (this->_hp > 0 && this->_enrg > 0)
		std::cout << "FragTrap says: \"HIGH FIVE ME BREDAS!!!|\"" << std::endl;
}

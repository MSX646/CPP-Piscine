#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() //_name("Default"), _hp(100), _enrg(50), _attck(20) 
{
	std::cout << "ScavTrap: default created" << std::endl;
	this->_hp = 100;
	this->_enrg = 50;
	this->_attck = 20;
}

ScavTrap::ScavTrap(str name) : ClapTrap(name) //_name(name), _hp(100), _enrg(50), _attck(20)
{
	std::cout << "ScavTrap: " << this->_name <<" created" << std::endl;
	this->_hp = 100;
	this->_enrg = 50;
	this->_attck = 20;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & src)
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

void ScavTrap::attack(const str & target)
{
	if (this->_hp > 0 && this->_enrg > 0)
	{
		std::cout << "ScavTrap: " << this->_name << " attacks "; 
		std::cout << target << " for " << this->_attck << " damage" << std::endl;
		this->_enrg--;
		return;
	}
	std::cout << "Not enough energy or health" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hp > 0 && this->_enrg)
	{
		std::cout << "ScavTrap: " << this->_name << " is now in Gate keeper mode" << std::endl;
		return;
	}
	std::cout << "Not enough energy or health" << std::endl;
}

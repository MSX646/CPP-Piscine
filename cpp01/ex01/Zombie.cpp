#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(str name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setter(str name)
{
	this->_name = name;
}

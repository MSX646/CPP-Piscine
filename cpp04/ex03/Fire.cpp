#include "Fire.hpp"

Fire::Fire() : AMateria("fire")
{}

Fire::Fire(const Fire &src) : AMateria(src)
{}

Fire::~Fire()
{}

Fire &Fire::operator=(const Fire &src)
{
	this->_type = src._type;
	return *this;
}

AMateria *Fire::clone() const
{
	return new Fire();
}

void Fire::use(ICharacter &target)
{
	std::cout << "* shoots a fireball at " << target.getName() << " *" << std::endl;
}

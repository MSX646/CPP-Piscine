#include "AMateria.hpp"

AMateria::AMateria() : _type("none")
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const std::string &type) : _type(type)
{}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}

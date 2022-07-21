#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & src)
{
	this->setType(src.getType());
	return *this;
}

str WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::setType(const str & type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal says: dis sound is bomboclat innit" << std::endl; 
}

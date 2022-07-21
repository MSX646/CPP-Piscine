#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & src)
{
	this->setType(src.getType());
	return *this;
}

str Animal::getType() const
{
	return this->type;
}

void Animal::setType(const str & type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "Animal says: whateva bruv" << std::endl; 
}

#include "Dog.hpp"

Dog::Dog() 
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog & src) : Animal(src)
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & src)
{
	this->setType(src.getType());
	return *this;
}

str Dog::getType() const
{
	return this->type;
}

void Dog::setType(const str & type)
{
	this->type = type;
}

void Dog::makeSound() const
{
	std::cout << "Dog says: !BARK!" << std::endl;
}

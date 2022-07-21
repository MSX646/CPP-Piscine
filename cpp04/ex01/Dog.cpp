#include "Dog.hpp"

Dog::Dog() : _brain(new Brain) 
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	_brain->setIdeas();
}

Dog::Dog(const Dog & src) : Animal(src)
{
	*this = src;
	
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog & Dog::operator=(const Dog & src)
{
	this->setType(src.getType());
	_brain = new Brain(*src._brain);
	return *this;
}

Brain *Dog::getBrain()
{
	return this->_brain;
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

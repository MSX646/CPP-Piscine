#include "Cat.hpp"

Cat::Cat() : _brain(new Brain)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	_brain->setIdeas();

}

Cat::Cat(const Cat & src) : Animal(src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat & Cat::operator=(const Cat & src)
{
	this->setType(src.getType());
	_brain = new Brain(*src._brain);
	return *this;
}

Brain *Cat::getBrain()
{
	return this->_brain;
}

str Cat::getType() const
{
	return this->type;
}

void Cat::setType(const str & type)
{
	this->type = type;
}

void Cat::makeSound() const
{
	std::cout << "Cat says: !MEOW!" << std::endl;
}

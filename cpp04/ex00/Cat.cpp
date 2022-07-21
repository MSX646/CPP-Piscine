#include "Cat.hpp"

Cat::Cat()  
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat & src) : Animal(src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & src)
{
	this->setType(src.getType());
	return *this;
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

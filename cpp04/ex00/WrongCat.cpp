#include "WrongCat.hpp"

WrongCat::WrongCat()  
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & src)
{
	this->setType(src.getType());
	return *this;
}

str WrongCat::getType() const
{
	return this->type;
}

void WrongCat::setType(const str & type)
{
	this->type = type;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat says: !MEOW!" << std::endl;
}

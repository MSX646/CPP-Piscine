#include "Fixed.hpp"

/* UTILS */
int ft_pow(int base, int p)
{
	int res = 1;
	for (int i = 0; i < p; i++)
		res *= base;
	return res;
}

/* CONSTRUCTORS & DESTRUCTOR */
Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float n)
{
	this->_val = roundf(n * ft_pow(2, this->bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->_val = n << this->bits;
	std::cout << "Int constructor called" << std::endl;
}

/* METHODS & OVERLOADS */
Fixed &  Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&src != this)
		this->_val = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->_val;
}

void Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}


float Fixed::toFloat(void) const
{
	return (((float) this->getRawBits()) / ft_pow(2, this->bits));	
}

int Fixed::toInt(void) const
{
	return this->getRawBits() >> this->bits;
}

std::ostream &	operator<<(std::ostream & out, Fixed const & inst)
{
	out << inst.toFloat();
	return out;
}

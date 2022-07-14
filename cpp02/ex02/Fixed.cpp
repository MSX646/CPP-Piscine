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
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const float n)
{
	this->_val = roundf(n * ft_pow(2, this->bits));
}

Fixed::Fixed(const int n)
{
	this->_val = n << this->bits;
}

/* -----------------METHODS & OVERLOADS-------------------- */
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

Fixed &  Fixed::operator=(Fixed const &src)
{
	if (&src != this)
		this->_val = src.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &right) const
{
	return this->getRawBits() > right.getRawBits();
}

bool Fixed::operator<(Fixed const &right) const
{
	return this->getRawBits() < right.getRawBits();
}

bool Fixed::operator<=(Fixed const &right) const
{
	return this->getRawBits() <= right.getRawBits();
}

bool Fixed::operator>=(Fixed const &right) const
{
	return this->getRawBits() >= right.getRawBits();
}

bool Fixed::operator==(Fixed const &right) const
{
	return this->getRawBits() == right.getRawBits();
}

bool Fixed::operator!=(Fixed const &right) const
{
	return this->getRawBits() != right.getRawBits();
}

Fixed Fixed::operator+(Fixed const &right) const
{
	
	return Fixed(this->toFloat() + right.toFloat());
}

Fixed Fixed::operator-(Fixed const &right) const
{
	
	return Fixed(this->toFloat() - right.toFloat());
}

Fixed Fixed::operator*(Fixed const &right) const
{
	
	return Fixed(this->toFloat() * right.toFloat());
}

Fixed Fixed::operator/(Fixed const &right) const
{
	
	return Fixed(this->toFloat() / right.toFloat());
}

//PREFIX
Fixed & Fixed::operator++()
{
	this->_val++;
	return (*this);
}

Fixed & Fixed::operator--()
{
	this->_val--;
	return (*this);
}

//POSTFIX
Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->_val++;

	return old;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	this->_val--;

	return old;
}

std::ostream &	operator<<(std::ostream & out, Fixed const & inst)
{
	out << inst.toFloat();
	return out;
}



Fixed & Fixed::min(Fixed &l, Fixed &r)
{
	if (l < r)
		return (l);
	else
		return (r);
}

const Fixed & Fixed::min(Fixed const &l, Fixed const &r)
{
	if (l < r)
		return (l);
	else
		return (r);
}

Fixed & Fixed::max(Fixed &l, Fixed &r)
{
	if (l > r)
		return (l);
	else
		return (r);
}

const Fixed & Fixed::max(Fixed const &l, Fixed const &r)
{
	if (l > r)
		return (l);
	else
		return (r);
}

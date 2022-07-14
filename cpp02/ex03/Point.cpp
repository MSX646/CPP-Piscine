#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{}

Point::Point(float const x, float const y) : _x(x), _y(y)
{}

Point::Point(Point const &cpy) : _x(cpy._x), _y(cpy._y)
{}

Point::~Point()
{}

Point & Point::operator=(Point const &src)
{
	if (&src != this)
	{
		(Fixed) this->_x = (Fixed) src._x;
		(Fixed) this->_y = (Fixed) src._y;
	}
	return *this;
}

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}

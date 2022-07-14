#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
	Point();
	Point(float const x, float const y);
	Point(Point const &cpy);
	~Point();

	Point &operator=(Point const &src);
	
	Fixed getX() const;
	Fixed getY() const;

	private:
	Fixed const _x;
	Fixed const _y;


};

bool bsp(Point const a, Point const b, Point const c,  Point const point);

#endif

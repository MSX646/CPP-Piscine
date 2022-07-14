#include "Point.hpp"

Fixed area(Point a, Point b, Point c)
{
	Fixed ret;

	ret = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / Fixed(2.0f);
    if (ret < 0)
        ret = ret * -1;
    return (ret);
}

bool bsp(Point const a, Point const b, Point const c,  Point const point)
{
	/*if ((a.getX() == (Fixed)(b.getX() == c.getX())) || (a.getY() == (Fixed)(b.getY() == c.getY())))
	{
		std::cout << "Invalid coordinates" << std::endl;
		return false;
	}*/

	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);
	Fixed res = A1 + A2 + A3;

	if (A1.getRawBits() == 0 || A2.getRawBits() == 0 || A3.getRawBits() == 0)
		return (false);
	return (A == res);
}

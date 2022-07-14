#include "Point.hpp"

int main( void ) 
{
	Point a (0.0f, 0.0f);
	Point b (0.0f, 5.0f);
	Point c (5.0f, 0.0f);
	Point p (1.0f, 1.0f);

	std::cout << bsp(a, b, c, p) << std::endl;
}

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>

struct Data
{
	Data(int i, char c, float f, double d) : _i(i), _c(c), _f(f), _d(d) {}
	int _i;
	char _c;
	float _f;
	double _d;
};

#endif

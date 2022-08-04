#include "Span.hpp"

Span::Span() : _max(0)
{}

Span::Span(unsigned int n) : _max(n)
{}

Span::Span(const Span &src) : _max(src._max), _vec(src._vec)
{}

Span::~Span()
{}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_vec = src._vec;
		_max = src._max;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_vec.size() >= _max)
		throw Span::FullException();
	_vec.push_back(n);
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw Span::EmptyException();
	std::vector<int> tmp = _vec;
	std::vector<int>::iterator iter;
	int res = 0;

	std::sort(tmp.begin(), tmp.end());
	res = *(tmp.begin() + 1) - *tmp.begin();
	if (_vec.size() == 2)
		return res;
	
	for(iter = tmp.begin() + 1; iter != tmp.end() - 1 && res != 0; iter++)
	{
		if (*(iter + 1) - *iter < res)
			res = *(iter + 1) - *iter;
	}

	return res;
}

int Span::longestSpan()
{	
	if (_vec.size() < 1)
		throw Span::EmptyException();
	std::sort(_vec.begin(), _vec.end());
	return _vec[_vec.size() - 1] - _vec[0];
}

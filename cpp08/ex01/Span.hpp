#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <iterator>
# include <algorithm>
# include <vector>

class Span
{
	unsigned int _max;
	std::vector<int> _vec;

	public:
	Span();
	Span(unsigned int n);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);
	
	void addNumber(int n);
	
	template<typename T>
	void addNumber(T begin, T end)
	{
		if (std::distance(begin, end) > _max)
			throw Span::FullException();
		for (; begin != end; begin++)
			_vec.push_back(*begin);
	}
	
	int shortestSpan();
	int longestSpan();

	class FullException : public std::exception
	{
		public:
		virtual const char *what() const throw() { return "Span Is Full";}
	};
	
	class EmptyException : public std::exception
	{
		public:
		virtual const char *what() const throw() { return "Span Is Empty or Has a Single Element";}
	};
};

#endif

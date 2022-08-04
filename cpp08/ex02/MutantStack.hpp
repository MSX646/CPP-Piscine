#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <stack>
# include <iterator>
# include <iostream>

template<typename T>
class MutantStack :  public std::stack<T, std::deque<T>>
{
	public:
	MutantStack() {};
	MutantStack(const MutantStack &src) : std::stack<T>(src) {};
	~MutantStack() { this->c.clear(); }

	MutantStack &operator=(const MutantStack &src)
	{
		if (this != &src)
			this->c = src.c;
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); };
	iterator end() { return this->c.end(); };

};

#endif

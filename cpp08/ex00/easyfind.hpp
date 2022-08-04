#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template<typename T>
int easyfind(T cont, int f)
{
	typename T::const_iterator iter = find(cont.begin(), cont.end(), f);
	if (iter == cont.end())
		return -1;
	return *iter;
}

#endif

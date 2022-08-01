#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename Type>
void iter(Type *arr, size_t n, void (*func)(Type &))
{
	for (size_t i = 0; i < n; i++)
		func(arr[i]);
}

#endif 

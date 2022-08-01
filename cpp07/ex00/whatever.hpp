#pragma once
#include <iostream>

template<typename Type>
void swap(Type &a, Type &b)
{
	Type tmp = a;
	a = b;
	b = tmp;
}

template<typename Type>
Type &max(Type &a, Type &b)
{
	return a < b ? b : a;
}

template<typename Type>
Type &min(Type &a, Type &b)
{
	return a < b ? a : b;
}

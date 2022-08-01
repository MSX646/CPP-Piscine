#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>
# include <string>

template<typename Type>
class Array
{
	Type *arr;
	int _size;

	public:
	Array();
	explicit Array(unsigned int n);
	Array(const Array<Type> &other);
	~Array();

	Array<Type> &operator=(const Array<Type> &src);
	Type &operator[](int index);
	const Type &operator[](int index) const;
	
	int size() const;

};

template<typename Type>
std::ostream &operator<<(std::ostream &out, const Array<Type> &arr);

template<typename Type>
Array<Type>::Array() : arr(), _size(0)
{}

template<typename Type>
Array<Type>::Array(unsigned int n) : arr(new Type[n]), _size(n)
{}

template<typename Type>
Array<Type>::~Array()
{
	delete []arr;
}

template<typename Type>
Array<Type>::Array(const Array<Type> &src)
{
	*this = src;
}

template<typename Type>
int Array<Type>::size() const
{
	return _size;
}

template<typename Type>
Array<Type> &Array<Type>::operator=(const Array<Type> &src)
{
	if (this != &src)
	{
		delete []arr;
		_size = src._size;
		arr = new Type[_size];
		for (unsigned int i = 0; i < _size; i++)
			arr[i] = src[i];
	}
	return *this;
}

template<typename Type>
Type &Array<Type>::operator[](int index)
{
	if (index < 0 || index >= _size)
		throw std::exception();
	return arr[index];
}

template<typename Type>
const Type &Array<Type>::operator[](int index) const
{
	if (index < 0 || index >= _size)
		throw std::exception();
	return arr[index];
}

template<typename Type>
std::ostream &operator<<(std::ostream &out, const Array<Type> &arr)
{
	for (int i = 0; i < arr.size(); i++)
		out << arr[i] << std::endl;
	return out;
}

#endif

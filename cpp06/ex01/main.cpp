#include "data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &o, Data &data)
{
	o << "int: " << data._i << std::endl;
	o << "char: " << data._c << std::endl;
	o << "float: " << data._f << "f" << std::endl;
	o << "double: " << data._d << std::endl;

	return o;
}

int main()
{
	Data *data = new Data(42, 'A', 42.00f, 42.21);
	uintptr_t raw = serialize(data);

	std::cout << raw << std::endl;

	Data *atad = deserialize(raw);
	std::cout << *atad << std::endl;

	delete data;
	return 0;
}

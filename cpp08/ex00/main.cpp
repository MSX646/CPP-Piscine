#include "easyfind.hpp"
#include <vector>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::vector<int> vec {2, 5, 123, 24124, 446, 3232, 4444, 4242};

		int res = easyfind(vec, atoi(av[1]));
		if (res == -1)
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Element found: " << res << std::endl;
		return 0;
	}
	std::cout << "Ivalid number of args" << std::endl;
	return 1;
}

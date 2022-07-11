#include "Zombie.hpp"

Zombie* zombieHorde(int N, str name)
{
	Zombie *arr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		arr[i].setter(name);
		arr[i].announce();
	}
	return arr;
}

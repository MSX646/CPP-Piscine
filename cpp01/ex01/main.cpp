#include "Zombie.hpp"

int main(void)
{
	std::cout << "Horde of Zombs" << std::endl;
	Zombie *horde = zombieHorde(5, "Zomb");

	delete []horde;
	return 0;
}

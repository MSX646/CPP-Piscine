#include "Zombie.hpp"

int main(void)
{
	Zombie *zomb = newZombie("Zomb");
	zomb->announce();

	randomChump("Quad");

	delete zomb;
	return 0;
}

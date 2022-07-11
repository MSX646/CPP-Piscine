#include "Zombie.hpp"

Zombie* newZombie(str name)
{
	Zombie *zomb = new Zombie(name);
	return zomb;
}

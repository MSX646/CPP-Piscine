#include "Zombie.hpp"

void	randomChump(str name)
{
	Zombie random = Zombie(name);
	random.announce();
}

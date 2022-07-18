#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap cp("Dale");

	cp.attack("Enemy");
	cp.takeDamage(5);
	cp.beRepaired(5);
	cp.takeDamage(10);
	cp.attack("Enemy2");
	cp.whoAmI();
	cp.info();
}

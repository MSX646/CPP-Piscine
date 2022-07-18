#include "ScavTrap.hpp"

int main()
{
	ScavTrap cp("Chip");
	ScavTrap test;

	cp.attack("Enemy");
	cp.takeDamage(5);
	cp.beRepaired(5);
	cp.takeDamage(10);
	cp.guardGate();
	cp.attack("Enemy2");
}

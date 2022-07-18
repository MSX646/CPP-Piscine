#include "FragTrap.hpp"

int main()
{
	FragTrap cp("Dale");
	FragTrap test;

	cp.attack("Enemy");
	cp.takeDamage(5);
	cp.beRepaired(5);
	cp.takeDamage(10);
	cp.highFiveGuys();
	cp.attack("Enemy2");
}

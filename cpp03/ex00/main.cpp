#include "ClapTrap.hpp"

int main()
{
	ClapTrap cp("Snoopy");

	cp.attack("Enemy");
	cp.takeDamage(5);
	cp.beRepaired(5);
	cp.takeDamage(10);
	cp.attack("Enemy2");
	cp.beRepaired(5);
}

#include "Harl.hpp"

int complain(str level)
{
	str levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	for (i = 0; levels[i] != level && i < 5 ; i++);
	return i;
}

int main(int ac, char **av)
{
	Harl harl;
	
	if (ac != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	str comp = str(av[1]);
	int nbLevel = complain(comp);

	switch(nbLevel)
	{
		case 0:	
			harl.debug();
		case 1: 
			harl.info();
		case 2: 
			harl.warning();
		case 3: 
			harl.error(); break;
		default:
			std::cout << "[Probably complainig about insignificant problems]" << std::endl; break;	
	}
}

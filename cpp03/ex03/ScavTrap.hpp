#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
	ScavTrap();
	
	public:
	ScavTrap(str name);
	ScavTrap(const ScavTrap & src);
	~ScavTrap();
	
	ScavTrap & operator=(const ScavTrap & src);

	void attack(const str & target);
	
	void guardGate();
};

#endif

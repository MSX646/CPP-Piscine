#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	str _name;

	public:
	DiamondTrap(str name);
	DiamondTrap(const DiamondTrap & src);
	~DiamondTrap();

	DiamondTrap & operator=(const DiamondTrap & src);

	void attack(const str & target);
	void info();
	void whoAmI();
	
	protected:
	DiamondTrap();
};

#endif

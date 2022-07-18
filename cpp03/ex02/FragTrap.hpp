#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(str name);
	FragTrap(const FragTrap & src);
	~FragTrap();

	FragTrap & operator=(const FragTrap & src);

	void attack(const str & target);
	void highFiveGuys();
};

#endif

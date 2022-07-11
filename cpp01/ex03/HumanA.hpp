#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	str _name;
	Weapon &_weapon;
	
	public:
	HumanA(str name, Weapon &weapon);
	~HumanA();
	void	attack();	
};

#endif

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	str _name;
	Weapon *_weapon;
	
	public:
	HumanB(str name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();	
};

#endif

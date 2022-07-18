#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define str std::string
# include <iostream>
# include <string>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(str name);
	ClapTrap(const ClapTrap & src);
	~ClapTrap();
	ClapTrap & operator=(const ClapTrap & src);

	void attack(const str &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:
	str _name;
	int _hp;
	int _enrg;
	int _attck;


};

#endif

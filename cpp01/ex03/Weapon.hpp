#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>
# define str std::string


class Weapon
{
	public:
	
	Weapon(str type);
	~Weapon();
	const str &getType();
	void setType(str type);


	private:
	str _type;
};

#endif

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# define str std::string
# include <iostream>
# include <string>



class Zombie
{
	public:
	void announce(void);
		Zombie(str name);
	~Zombie(void);

	private:
	str _name;
};
	Zombie *newZombie(str name);
	void randomChump(str name);


#endif

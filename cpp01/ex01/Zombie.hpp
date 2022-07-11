#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# define str std::string
# include <iostream>
# include <string>



class Zombie
{
	public:
	void announce(void);
	Zombie();
	Zombie(str name);
	~Zombie(void);
	void	setter(str name);

	private:
	str _name;
};

	Zombie* zombieHorde(int N, str name);

#endif

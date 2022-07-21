#include "Character.hpp"

Character::Character() : name("none"), i(-1)
{}

Character::Character(std::string name) : name(name), i(-1)
{}

Character::Character(const Character &src)
{
	*this = src;
}

Character::~Character()
{
	std::cout << this->name << " destroyed" << std::endl;
	//for(int i = 0; i < 4; i++)
	//	delete slot[i];
}

Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->name = src.getName();
		this->i = src.i;
		for (int j = 0; j < i; j++)
			this->slot[j] = src.slot[j];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
		this->slot[++this->i] = m;
}

void Character::unequip(int idx)
{
	if (slot[idx])
		slot[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->slot[idx] != 0 && i > -1 && idx > -1)
		this->slot[idx]->use(target);
}

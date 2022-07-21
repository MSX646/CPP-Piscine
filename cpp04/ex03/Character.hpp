#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	std::string name;
	AMateria *slot[4];
	int i;

	public:
		Character();
		Character(const Character &src);
		Character(std::string name);
		~Character();
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		Character &operator=(Character const &src);

};

#endif

#ifndef FIRE_HPP
# define FIRE_HPP
# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire(const Fire & src);
		Fire &operator=(const Fire &src);
		~Fire();
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif

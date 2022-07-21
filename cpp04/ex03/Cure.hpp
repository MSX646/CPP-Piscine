#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure & src);
		~Cure();
		Cure &operator=(const Cure &src);
	 	
		virtual AMateria *clone() const;
		void use(ICharacter &target);
};

#endif

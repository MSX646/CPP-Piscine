#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal 
{
	Brain* _brain;

	public:
		Dog();
		Dog(const Dog & src);
		~Dog();
		Dog & operator=(const Dog &src);
		
		Brain *getBrain();
		str getType() const;
		void setType(const str & type);
		void makeSound() const;
	protected:
		str type;
};

#endif

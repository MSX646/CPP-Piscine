#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal 
{
	public:
		Dog();
		Dog(const Dog & src);
		~Dog();
		Dog & operator=(const Dog &src);
		
		str getType() const;
		void setType(const str & type);
		void makeSound() const;
	protected:
		str type;
};

#endif

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define str std::string
# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal & src);
		virtual ~Animal();
		Animal & operator=(const Animal &src);
		
	 	virtual Brain *getBrain() = 0;
		virtual str getType() const;
		void setType(const str & type);
		virtual void makeSound() const;
	protected:
		str type;
};

#endif

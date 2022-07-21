#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define str std::string
# include <string>
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal & src);
		virtual ~Animal();
		Animal & operator=(const Animal &src);
		
		virtual str getType() const = 0;
		virtual void setType(const str & type) = 0;
		virtual void makeSound() const = 0;
	protected:
		str type;
};

#endif

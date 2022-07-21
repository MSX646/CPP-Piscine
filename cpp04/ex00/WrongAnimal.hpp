#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# define str std::string
# include <string>
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & src);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal &src);
		
	 	str getType() const;
		void setType(const str & type);
		void makeSound() const;
	protected:
		str type;
};

#endif

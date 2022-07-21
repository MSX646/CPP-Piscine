#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat & src);
		~WrongCat();
		WrongCat & operator=(const WrongCat &src);
		
		str getType() const;
		void setType(const str & type);
		void makeSound() const;
	protected:
		str type;
};

#endif

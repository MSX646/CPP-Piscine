#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat & src);
		~Cat();
		Cat & operator=(const Cat &src);
		
		str getType() const;
		void setType(const str & type);
		void makeSound() const;
	protected:
		str type;
};

#endif

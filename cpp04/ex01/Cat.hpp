#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain *_brain;
	
	public:
		Cat();
		Cat(const Cat & src);
		~Cat();
		Cat & operator=(const Cat &src);
		
		Brain *getBrain();
		str getType() const;
		void setType(const str & type);
		void makeSound() const;
	protected:
		str type;
};

#endif

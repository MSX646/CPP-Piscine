#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* scnd = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();

	std::cout << scnd->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	scnd->makeSound();
	cat->makeSound();

	delete scnd;
	delete cat;

	return 0;
}

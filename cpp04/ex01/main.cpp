#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Animal* arr[10];

	for (int i = 0; i < 10; i++)	
	{
		if (i % 2 == 0)
			arr[i] = new Dog;
		else
			arr[i] = new Cat;
	}

	std::cout << "\e[0;32mBrain of a Cat: " << arr[0]->getBrain()->getIdea() << std::endl;
	std::cout << "Brain of a Dog: " << arr[2]->getBrain()->getIdea() << "\e[0m" << std::endl;

	std::cout << "\e[0;31m";
	for (int i = 0; i < 10; i++)
		delete arr[i];
	std::cout << "\e[0m";
}

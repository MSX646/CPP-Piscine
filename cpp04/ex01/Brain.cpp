#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain & src)
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = src.ideas[i];
	std::cout << "Copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = src.ideas[i];
	}
	return *this;
}

str Brain::getIdea()
{
	return this->ideas[0];
}

void Brain::setIdeas()
{
	str idea = "eat, sleep, reproduct";
	for(int i = 0; i < 100; ++i)
		ideas[i] = idea;
}

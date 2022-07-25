#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &src)
{
	return *this;
}

static int complain(std::string name)
{
	std::string names[] = {"robotomy request", "presidential pardon", "shruberry creation"};

	int i = 0;
	for (i = 0; names[i] != name && i < 4 ; i++);
	return i;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	int i = complain(name);

	switch(i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			throw Intern::FormException();  
	}	
}

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	Form *f1 = new ShrubberyCreationForm("28c");
	Form *f2 = new RobotomyRequestForm("337a");
	Form *f3 = new PresidentialPardonForm("7b");
	Bureaucrat b1 = Bureaucrat("Ash", 125);
	Bureaucrat b2 = Bureaucrat("Donald", 5);		
	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << *f3 << std::endl;
	try {
		f1->beSigned(b2);
		f1->execute(b2);
		f2->beSigned(b2);
		f2->execute(b2);
		f3->beSigned(b2);
		f3->execute(b2);
	}
	catch (std::exception & e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	delete f1;
	delete f2;
	delete f3;
}

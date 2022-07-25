#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat b1 = Bureaucrat("Ash", 125);
	Bureaucrat b2 = Bureaucrat("Gzizlav", 5);		
	Intern intern = Intern();
	Form *ptr = NULL;
	try
	{
		ptr = intern.makeForm("robotomy request", "Ash");
		std::cout << *ptr << std::endl;
		ptr->beSigned(b2);
		ptr->execute(b2);
		delete ptr;
		//ptr = intern.makeForm("presidential pardon", "Ash");
		ptr = intern.makeForm("asdasdasd", "Ash");
		std::cout << *ptr << std::endl;
		ptr->beSigned(b1);
		ptr->execute(b1);
	}
	catch (std::exception & e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	//delete ptr;
}

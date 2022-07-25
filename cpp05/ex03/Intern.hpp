#ifndef INTERN_HPP
# define INTERN_HPP
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class Intern
{
	public:
	Intern();
	Intern(const Intern &src);
	~Intern();
	
	Intern &operator=(const Intern &src);

	Form *makeForm(std::string name, std::string target);

	class FormException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return "Can't create a form: No such form name";
		}
	};
};

#endif

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# define HIGH 1
# define LOW 150
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"
class Form;


class Bureaucrat
{
	const std::string name;
	int grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();
		
		Bureaucrat & operator=(const Bureaucrat & src);

		std::string getName() const;
		int getGrade() const;
		void incrGrade();
		void decrGrade();
		void signForm(Form &form);
		void executeForm(const Form &form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & src);	

#endif

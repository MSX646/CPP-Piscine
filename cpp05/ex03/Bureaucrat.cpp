#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(LOW)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade < HIGH)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > LOW)
		throw Bureaucrat::GradeTooLowException();
	this->grade = _grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		if (src.grade < HIGH)
			throw Bureaucrat::GradeTooHighException();
		else if (src.grade > LOW)
			throw Bureaucrat::GradeTooLowException();
		this->grade = src.grade;
	}
	return *this;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << getName() << " couldn't sign " << form.getName();
		std::cout << " --> " << e.what() << std::endl;
	}
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrGrade()
{
	this->grade--;
	if (this->grade < HIGH)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrGrade()
{
	this->grade++;
	if (this->grade < LOW)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void Bureaucrat::executeForm(const Form &form)
{
	if (form.getSign())
		std::cout << name << " signs " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
	o << src.getName() << ": bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}

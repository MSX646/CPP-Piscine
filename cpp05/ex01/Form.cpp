#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _grade(LOW), _exec(LOW)  
{}

Form::Form(std::string name, int grade, int exec) : _name(name), _signed(false), _grade(grade), _exec(exec)
{
	if (this->_grade < HIGH || this->_exec < HIGH)
		throw Form::GradeTooHigh();
	else if (this->_grade > LOW || this->_exec > LOW)
		throw Form::GradeTooLow();
}

Form::~Form()
{}

Form::Form(const Form &src) : _name(src._name), _grade(src._grade), _exec(src._exec)

{
	*this = src;
}

Form &Form::operator=(const Form &src) {
	if (this != &src)
	{
		if (this->_grade < HIGH || this->_exec < HIGH)
			throw Form::GradeTooHigh();
		else if (this->_grade > LOW || this->_exec > LOW)
			throw Form::GradeTooLow();
		this->_signed = src._signed;
	}
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

int Form::getGrade() const
{
	return this->_grade;
}

int Form::getExec() const
{
	return this->_exec;
}

bool Form::getSign() const
{
	return this->_signed;
}

void Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= _exec)
		_signed = true;
	else
		throw GradeTooLow();
}

std::ostream &operator<<(std::ostream &o, const Form &src)
{
	std::cout << "Name: " << src.getName() << std::endl;
	std::cout << "Grade: " << src.getGrade() << std::endl;
	std::cout << "Execution: " << src.getExec() << std::endl;
	std::cout << "Signed (0/1): " << src.getSign() << std::endl;
	
	return o;
}

const char *Form::GradeTooHigh::what() const throw()
{
	return "Form: Grade is too high";
}

const char *Form::GradeTooLow::what() const throw()
{
	return "Form: Grade is too low";
}



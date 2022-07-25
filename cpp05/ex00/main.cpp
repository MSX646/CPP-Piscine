#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		Bureaucrat chip("Chip", 1);
		std::cout << chip << std::endl;
		chip.incrGrade();
		std::cout << chip << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat ash("Ash", 151);
		std::cout << ash << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat nico("Nico", 145);
		std::cout << nico << std::endl;
		nico.incrGrade();
		std::cout << nico << std::endl;
		nico.incrGrade();
		std::cout << nico << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

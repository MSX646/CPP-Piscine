#include <iostream>
#include <string>
#define str std::string

int		main( void )
{
	str	String = "HI THIS IS BRAIN";
	str *stringPTR = &String;
	str	&stringREF = String;
	std::cout << "Original string address: " << &String << std::endl;
	std::cout << "using stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "using stringREF: " << &stringREF << std::endl;
	std::cout << "Original string: " << String << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}

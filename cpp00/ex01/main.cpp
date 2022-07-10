#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	while (true)
	{
		std::string cmd;
		std::cout << "PhoneBook$ ";
		std::getline(std::cin, cmd);
		if (!(std::cin.good()))
		{
			std::cout << "Exiting...\n";
			exit(1);
		}
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.get_list();
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "PhoneBook: invalid command: " << cmd << std::endl;
	}
}

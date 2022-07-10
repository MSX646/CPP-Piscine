#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define str std::string
#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	public:
	PhoneBook();
	void	add();
	void	get_list();


	private:
	Contact arr[8];
	int nbr;
	void	get_cont(int index);
};

#endif

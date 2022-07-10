#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->nbr = 0;
}

str get_val(str s)
{
	str ret;
	std::cout << s << ": ";
	std::getline(std::cin, ret);
	if (!(std::cin.good()))
	{
		std::cout << "Exiting...\n";
		exit(0);
	}
	return ret;
}

void	PhoneBook::add()
{
	str frst, last, nick, phone, secret;
	frst = get_val("First Name");
	last = get_val("Last Name");
	phone = get_val("Phone Number");
	nick = get_val("Nickname");
	secret = get_val("Darkest Secret");

	if (frst.empty() || last.empty() || phone.empty() || nick.empty() || secret.empty())
	{
		std::cout << "Can't add: some fields are empty\n";
		return;
	}

	Contact contact(frst, last, phone, nick, secret);
	this->arr[nbr++ % 8] = contact;
}

void	PhoneBook::get_cont(int index)
{
	if (index > 7 || index >= this->nbr || index < 0)
	{
		std::cout << "Index out of range\n";
		return;
	}
	Contact contact = this->arr[index];
	std::cout << "First Name: " << contact.get_frst() << std::endl;
	std::cout << "Last Name: " << contact.get_last() << std::endl;
	std::cout << "Nickname: " << contact.get_nick() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}

void	format_str(str s)
{
	std::cout << s.substr(0, 10) << (s.length() > 10 ? "." : "");
}

void PhoneBook::get_list()
{
	int i;
	for (i = 0; i < 8 && i < this->nbr; i++)
	{
		Contact contact = this->arr[i];
		std::cout << i << " | ";
		format_str(contact.get_frst());
		std::cout << " | ";
		format_str(contact.get_last());
		std::cout << " | ";
		format_str(contact.get_nick());
		std::cout << std::endl;
	}
	str nbr;
	i = 0;
	std::cout << "index: ";
	std::getline(std::cin, nbr);
	std::stringstream ss;
	ss << nbr;
	if (!(ss >> i))
	{
		std::cout << "Invalid Input\n";
		return;
	}
	get_cont(i);
}

#include "Contact.hpp"

Contact::Contact()
{
	this->first = "";
	this->last = "";
	this->nick = "";
	this->phone = "";
	this->secret = "";
}

Contact::Contact(str frst, str last, str nick, str phone, str secret)
{
	this->first = frst;
	this->last = last;
	this->nick = nick;
	this->phone = phone;
	this->secret = secret;
}

str Contact::get_frst()
{
	return this->first;
}

str Contact::get_last()
{
	return this->last;
}

str Contact::get_nick()
{
	return this->nick;
}

str Contact::get_phone()
{
	return this->phone;
}

str Contact::get_secret()
{
	return this->secret;
}

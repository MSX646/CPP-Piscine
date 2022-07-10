#ifndef CONTACT_HPP
#define CONTACT_HPP
#define str std::string
#include <iostream>
class Contact
{	
	private:
	
	str first;
	str last;
	str nick;
	str phone;
	str secret;
		
	public:
	Contact();
	Contact(str frst, str last, str nick, str phone, str secret);
	str get_frst();
	str get_last();
	str get_nick();
	str get_phone();
	str get_secret();
};

#endif

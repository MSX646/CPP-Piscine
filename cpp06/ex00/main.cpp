#include "conversion.hpp"

static bool checker(std::string &s)
{
	if (isPseudo(s))
		return true;

	if (s.length() == 1 && isalpha(s[0]))
	{
		s = std::to_string(static_cast<int>(s[0]));
		return true;
	}

	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.')
			return false;
	}

	return true;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return 1;
	}

	std::string s(av[1]);
	if (checker(s))
		printConvers(s);
	else
		std::cout << "invalid" << std::endl;
}

#include <iostream>
#include <string>
#include <fstream>
#define str std::string

str replace(str s1, str s2, str tmp)
{
	size_t i;
	while ((i = tmp.find(s1)) != str::npos) {
		tmp = tmp.substr(0, i) + s2 + tmp.substr(i + s1.length(), -1);
	}
	return tmp;
}


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return 1;
	}
	str file = str(av[1]);
	str s1 = str(av[2]);
	str s2 = str(av[3]);
	str tmp;
	
	std::ifstream filein(file);
	if (!filein.good())
	{
		std::cerr << "Can't open a file: " << file << std::endl;
		return 1;
	}
	
	std::getline(filein, tmp, '\0');

	tmp = replace(s1, s2, tmp);
	std::ofstream fileout(file + ".replace");
	if (!fileout.good())
	{
		std::cerr << "Can't open a file: " << file + ".replace" << std::endl;
		return 1;
	}
	fileout << tmp;


	filein.close();
    	fileout.close();
    	return 0;
}

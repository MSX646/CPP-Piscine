#include "iter.hpp"
#include <cstdlib>
#include <cctype>

template<typename T>
void randVal(T &num)
{
	num = static_cast<T>(rand());
}

void capitilize(std::string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
}

int main()
{
	std::string strArr[3] = {"i'm in your walls", "I am the beast I worship", "gorilla bicuits"};
	float *intArr = new float[3];

	::iter(strArr, 3, &capitilize);
	std::cout << strArr[0] << std::endl;
	std::cout << strArr[1] << std::endl;
	std::cout << strArr[2] << std::endl;
	
	::iter(intArr, 3, &randVal);
	std::cout << intArr[0] << std::endl;
	std::cout << intArr[1] << std::endl;
	std::cout << intArr[2] << std::endl;
	delete intArr;

	return 0;
}

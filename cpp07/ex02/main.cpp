#include "Array.hpp"

int main()
{
    Array<int> arrOfInt;
    try
    {
        arrOfInt[0] = 10;
    } 
    catch (std::exception &e)
    {
        std::cout << "Index out of range" << std::endl;
    }

    Array<float> arrFloat(10);
    int size = arrFloat.size();
    for (int i = 0; i < size; ++i)
        arrFloat[i] = static_cast<float>(i) * 2;
    std::cout << arrFloat << std::endl;

    Array<std::string> arrStr(4);
    arrStr[0] = "I close my eyes and seize it";
    arrStr[1] = "I clench my fists and beat it";
    arrStr[2] = "I light my torch and burn it";
    arrStr[3] = "I am the beast I worship";
    std::cout << arrStr;

    return 0;
}

#include "Span.hpp"

int main()
{
	try
	{
		Span test1;
		test1.addNumber(5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::vector<int> Vec;
		Span test2(10000);
		for (int i = 0; i < 10000; i++)
			Vec.push_back(i);
		test2.addNumber(Vec.begin(), Vec.end());

		std::cout << "Shortest: " << test2.shortestSpan() << std::endl;
		std::cout << "Longest: " << test2.longestSpan() << std::endl;

		test2.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span test3(1);
		test3.addNumber(42);

		std::cout << "Shortest: " << test3.shortestSpan() << std::endl;
		std::cout << "Longest: " << test3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//SUBJ TESTS
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	return 0;
}

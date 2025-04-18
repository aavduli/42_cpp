#include "Span.hpp"

int main() {
	srand(time(0));

	{
	Span a(10);
	try 
	{
		for (int i = 0; i <= 10; ++i) {
			a.addNumber(rand()%10);
			std::cout << "Numbers added: " << a.getNumbers(i) << std::endl;
		}
	} catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	std::cout << "Shortest Span: " << a.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << a.longestSpan() << std::endl;
	}
	{
		Span b(10000);
		std::vector<int> toAdd;
		for (int i = 0; i < 10000; ++i)
			toAdd.push_back(i);
		b.addNumber(toAdd.begin(), toAdd.end());
		std::cout << "Shortest Span: " << b.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << b.longestSpan() << std::endl;
	}
}

#include "Span.hpp"

int main()
{
	int i = 4;
	Span sp = Span(i);

	std::srand(std::time(0));
	for(int j = 0; j < i ; j++)
	{
		int nombre = std::rand() % 101;
		std::cout << "Nombre[" << j << "] = " << nombre << std::endl;
		sp.addNumber(nombre);
	}
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
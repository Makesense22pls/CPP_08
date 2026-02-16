
#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	int array[] = {1, 2, 3, 4, 5,87,88};
	std::vector<int> container(array, array + sizeof(array)/sizeof(array[0]));
	try
	{
		std::vector<int>::iterator it_ = easyfind(container, 88);
		if (it_ != container.end())
			std::cout << " FOUND ! " << *it_ << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << " NOT FOUND" << std::endl;
	}
	return (0);
}
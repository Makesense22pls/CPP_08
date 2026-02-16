#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it_ = std::find(container.begin(), container.end(), value);
	if (it_ == container.end())
		throw (std::exception());
	return (it_);
}






#endif
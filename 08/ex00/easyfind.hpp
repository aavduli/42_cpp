#ifndef EASYFIND_HPP
# define TEMPLATE_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
typename T::iterator easyfind (T& container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end()) {
		throw std::runtime_error("value not foud");
	}
	return it;
}

#endif

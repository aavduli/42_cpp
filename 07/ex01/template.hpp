#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>
# include <cstdlib>

template <typename T>
void iter(T* array, int lenght, void (*f)(T&)) {
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}

#endif

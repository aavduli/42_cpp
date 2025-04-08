#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <cstdio>

template <class MyType>
void swap(MyType& a, MyType& b) {
	MyType tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class MyType>
MyType max(MyType a, MyType b) {
	return (a>b?a:b);
}

template <class MyType>
MyType min(MyType a, MyType b) {
	return (a<b?a:b);
}


#endif

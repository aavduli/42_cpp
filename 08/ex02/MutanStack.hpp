#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP
# include <iostream>
# include <string>
# include <fstream>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() {}
	MutantStack(const MutantStack& other) : std::stack<T>(other) {}
	~MutantStack() {}

	MutantStack& operator=(const MutantStack& other) {
		std::stack<T>::operator=(other);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};

#endif

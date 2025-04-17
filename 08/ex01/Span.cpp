#include "Span.hpp"

Span::Span() {
	std::cout << "Default constructor for Span has been called" << std::endl;
}

Span::Span() {
}

Span::Span(const Span &other) : { //copy constructor
}

Span::~Span() {
	std::cout << "Destructor for Span has been called" << std::endl;
}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
	}
	return *this;
	std::cout << "Copy assignement operator called." << std::endl;
}


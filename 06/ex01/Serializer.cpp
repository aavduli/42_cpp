#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Default constructor for Serializer has been called" << std::endl;
}

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer &other) : { //copy constructor
}

Serializer::~Serializer() {
	std::cout << "Destructor for Serializer has been called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &rhs) {
	if (this != &rhs) {
	}
	return *this;
	std::cout << "Copy assignement operator called." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Serializer &b) {
	// os << b. << " " << b. << ".";
	// return os;
}


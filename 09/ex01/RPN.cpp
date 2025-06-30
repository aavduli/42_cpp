#include "RPN.hpp"

RPN::RPN() {
	std::cout << "Default constructor for RPN has been called" << std::endl;
}

RPN::RPN() {
}

RPN::RPN(const RPN &other) : { //copy constructor
}

RPN::~RPN() {
	std::cout << "Destructor for RPN has been called" << std::endl;
}

RPN &RPN::operator=(const RPN &rhs) {
	if (this != &rhs) {
	}
	return *this;
	std::cout << "Copy assignement operator called." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const RPN &b) {
	// os << b. << " " << b. << ".";
	// return os;
}


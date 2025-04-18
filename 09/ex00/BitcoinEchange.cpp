#include "BitcoinEchange.hpp"

BitcoinEchange::BitcoinEchange() {
	std::cout << "Default constructor for BitcoinEchange has been called" << std::endl;
}

BitcoinEchange::BitcoinEchange() {
}

BitcoinEchange::BitcoinEchange(const BitcoinEchange &other) : { //copy constructor
}

BitcoinEchange::~BitcoinEchange() {
	std::cout << "Destructor for BitcoinEchange has been called" << std::endl;
}

BitcoinEchange &BitcoinEchange::operator=(const BitcoinEchange &rhs) {
	if (this != &rhs) {
	}
	return *this;
	std::cout << "Copy assignement operator called." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const BitcoinEchange &b) {
	// os << b. << " " << b. << ".";
	// return os;
}


#include "Span.hpp"

Span::Span() {
	std::cout << "Default constructor for Span has been called" << std::endl;
}

Span::Span(int n) : _maxSize(n) {}

Span::Span(const Span &other) : _numbers(other._numbers), _maxSize(other._maxSize) {}

Span::~Span() {
	std::cout << "Destructor for Span has been called" << std::endl;
}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_numbers = rhs._numbers;
		_maxSize = rhs._maxSize;
	}
	return *this;
	std::cout << "Copy assignement operator called." << std::endl;
}

void Span::addNumber(unsigned int num) {
	if (_numbers.size() >= _maxSize )
		throw std::runtime_error("Span is full");
	_numbers.push_back(num);
}

int Span::shortestSpan() const {
	
}


int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("No enough numbers to found a Span.");
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());

	return max - min;
}



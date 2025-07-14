#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(int n) : _maxSize(n) {}

Span::Span(const Span &other) : _numbers(other._numbers), _maxSize(other._maxSize) {}

Span::~Span() {}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_numbers = rhs._numbers;
		_maxSize = rhs._maxSize;
	}
	return *this;
}

void Span::addNumber(unsigned int num) {
	if (_numbers.size() >= _maxSize )
		throw std::runtime_error("Span is full");
	_numbers.push_back(num);
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max();
	for(size_t i = 0; i < sorted.size() - 1; ++i) {
		int diff = sorted[i + 1] - sorted[i];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}


int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("No enough numbers to found a Span.");
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());

	return max - min;
}

int Span::getNumbers(int index) {
	return _numbers[index];
}




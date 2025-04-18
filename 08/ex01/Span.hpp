#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <fstream> 
# include <vector>
# include <algorithm>
# include <limits>

class Span {
private:
	std::vector<int> _numbers;
	unsigned int _maxSize;
public:
	Span();
	Span(int n);
	Span(const Span &other);
	~Span();

	Span &operator=(const Span &rhs);

	void addNumber(unsigned int num);
	template <typename It>
	void addNumber(It begin, It end) {
		if (_numbers.size() + std::distance(begin, end) > _maxSize)
			throw std::runtime_error("Span has not enough space");
		_numbers.insert(_numbers.end(), begin, end);
	}
	int shortestSpan() const;
	int longestSpan() const;
	int getNumbers(int index);

};

#endif

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <fstream>

class Span {
private:


public:
	Span();
	Span();
	Span(const Span &other);
	~Span();

	Span &operator=(const Span &rhs);

};


#endif

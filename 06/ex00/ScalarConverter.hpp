#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <limits>
# include <cmath>
# include <sstream>
# include <iomanip>
# include <cstdlib>

enum LiteralType {
	TYPE_CHAR,
	TYPE_INT,
	TYPE_DOUBLE,
	TYPE_FLOAT,
	TYPE_INVALID,
};

class ScalarConverter {
private:
	// ScalarConverter();
	// ScalarConverter(const ScalarConverter &other);
	// ~ScalarConverter();
	// ScalarConverter &operator=(const ScalarConverter &rhs);

public:
	static void convert(const std::string& literal);
};


#endif

#include "ScalarConverter.hpp"

LiteralType detectType(const std::string& literal) {
	if (literal == "nanff" || literal == "+inff" || literal == "-inff")
		return TYPE_FLOAT;
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return TYPE_DOUBLE;
	if (literal.length() == 1 && !std::isdigit(literal[0]))
		return TYPE_CHAR;
	char *end;
	std::strtol(literal.c_str(), &end, 10);
	if (*end == '\0')
		return TYPE_INT;
	if (!literal.empty() && literal[literal.length() - 1] == 'f') {
		std::string sub = literal.substr(0, literal.length() - 1);
		std::strtof(sub.c_str(), &end);
		if (*end == '\0')
			return TYPE_FLOAT;
	}
	std::strtod(literal.c_str(), &end);
	if (*end == '\0')
		return TYPE_DOUBLE;
	return TYPE_INVALID;
}

void ScalarConverter::convert(const std::string& literal) {
	LiteralType type = detectType(literal);
	std::cout << std::fixed << std::setprecision(1);

	switch(type) {
		case TYPE_CHAR: {
			char c = literal[0];
			int i = static_cast<int>(c);
			float f = static_cast<float>(c);
			double d = static_cast<double>(c);
			
			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			break;

		}
		case TYPE_INT: {
			int i = std::atoi(literal.c_str());
			char c = static_cast<char>(i);
			float f = static_cast<float>(i);
			double d = static_cast<double>(i);

			if (i < 0 || i > 127)
				std::cout << "char: impossible" << std::endl;
			else if (!isprint(c))
				std::cout << "char: non displayable" << std::endl;
			else
				std::cout << "char: " << c << std::endl;
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			break;
		}
		case TYPE_FLOAT: {
			float f = std::strtof(literal.c_str(), NULL);
			char c = static_cast<char>(f);
			int i = static_cast<int>(f);
			double d = static_cast<double>(f);

			if (std::isnan(f) || f < 0 || f > 127)
				std::cout << "char: impossible" << std::endl;
			else if (!isprint(c))
				std::cout << "char: non displayable" << std::endl;
			else
				std::cout << "char: " << c << std::endl;
			if (std::isnan(f) || f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
				std::cout << "int: impossible" << std::endl;
			else
				std::cout << "int: " << i << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			break;
		}
		case TYPE_DOUBLE: {
			double d = std::strtod(literal.c_str(), NULL);
			char c = static_cast<char>(d);
			int i = static_cast<int>(d);
			float f = static_cast<float>(d);

			if (std::isnan(d) || d < 0 || d > 127)
				std::cout << "char: impossible" << std::endl;
			else if (!std::isprint(c))
				std::cout << "char: non displayable" << std::endl;
			else
				std::cout << "char: " << c << std::endl;
			if (std::isnan(d) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
				std::cout << "int: impossible" << std::endl;
			else
				std::cout << "int: " << i << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			break;
		}
		case TYPE_INVALID: 
		default: 
			std::cout << "Error: Invalid input.\n";
	}
}

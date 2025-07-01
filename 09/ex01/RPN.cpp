#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) : _stack(other._stack) {}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &rhs) {
	if (this != &rhs) {
		_stack = rhs._stack;
	}
	return *this;
}

bool RPN::validToken(std::string token) {
	if (token != "+" && token != "-" && token != "*" && token != "/" && (token[0] < 48 || token[0] > 59)) {
		return false;
	}
	return true;
}

float RPN::evaluateRPN(const std::string& expr) {
	std::stringstream ss(expr);
	std::string token;

	while (ss >> token) {
		if ((token == "+" || token == "-" || token == "*" || token == "/") && validToken(token)) {
			if (_stack.size() != 2) {
				std::cerr << "Error: not enough operands" << std::endl;
				return 0;
			}
			float b = _stack.top(); _stack.pop();
			float a = _stack.top(); _stack.pop();
			float result;
			if (token == "+") result = a + b;
			if (token == "*") result = a * b;
			if (token == "-") result = a - b;
			else if (token == "/") {
				if (b == 0) {
					std::cerr << "Error: division by zero" << std::endl;
					return 0;
				}
				result = a / b;
			}
			_stack.push(result);
		}
		else {
			_stack.push(std::atof(token.c_str()));
		}
	}
	if (_stack.size() != 1) {
		std::cerr << "Error: invalid expression" << std::endl;
		return 0;
	}
	return _stack.top();
}


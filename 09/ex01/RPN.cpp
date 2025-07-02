#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) : _stack(other._stack) {}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &rhs) {
	if (this != &rhs)
		_stack = rhs._stack;
	return *this;
}

bool RPN::validToken(std::string token) {
	if (token != "+" && token != "-" && token != "*" && token != "/") return false;
	return true;
}

float RPN::doOperation(float a, float b, std::string token) {
	if (token == "+") return a + b;
	else if (token == "-") return a - b;
	else if (token == "*") return a * b;
	else if (token == "/") {
		if (b == 0) throw std::runtime_error("Division by zero");
		return a / b;
	}
	throw std::runtime_error ("Unknown operator: " + token);
}

float RPN::evaluateRPN(const std::string& expr) {
	std::stringstream ss(expr);
	std::string token;

	try {
		while (ss >> token) {
			if ( validToken(token)) {
				if (_stack.size() < 2) throw std::runtime_error("Not enough operands");
				float b = _stack.top(); _stack.pop();
				float a = _stack.top(); _stack.pop();
				float result = doOperation(a , b, token);
				_stack.push(result);
			}
			else {
				std::stringstream numStream(token);
				float value;
				if (!(numStream >> value)) throw std::runtime_error("Invalid number:" + token);
				_stack.push(value);
			}
		}
	
		if (_stack.size() != 1) throw std::runtime_error("Invalid expression");
		return _stack.top();
	} catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 0;
	}
}


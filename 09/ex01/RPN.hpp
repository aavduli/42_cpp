#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <stack>
# include <cstdlib>
# include <sstream>

class RPN {
private:
	std::stack<float> _stack;
public:
	RPN();
	RPN(const RPN &other);
	~RPN();

	RPN &operator=(const RPN &rhs);

	bool validToken(std::string token);
	float doOperation(float a, float b, std::string token);
	float evaluateRPN(const std::string &expr);
};

#endif

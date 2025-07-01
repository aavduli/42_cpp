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

	float evaluateRPN(const std::string &expr);
};

#endif

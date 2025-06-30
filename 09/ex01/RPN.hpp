#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <fstream>

class RPN {
private:


public:
	RPN();
	RPN();
	RPN(const RPN &other);
	~RPN();

	RPN &operator=(const RPN &rhs);

};

std::ostream& operator<<(std::ostream& os, const RPN &b);

#endif

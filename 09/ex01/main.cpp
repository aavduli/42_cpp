#include "RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Bad arguments: do [3 4 + 2 *]" << std::endl;
		return 1;
	}
	RPN res;
	float result = res.evaluateRPN(av[1]);
	std::cout << "Result: " << result << std::endl;
	return 0;
}

#include "RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " \"<RPN expression>\"" << std::endl;
		return 1;
	}
	try {
		RPN res;
		float result = res.evaluateRPN(av[1]);
		std::cout << "Result: " << result << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}

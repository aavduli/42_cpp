#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Missing arguments: <file>\n";
		return 1;
	}
	try {
		BitcoinExchange bc;
		bc.loadDatabase("data.csv");
		bc.processInput(av[1]);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}


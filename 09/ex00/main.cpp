#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Please insert an input file" << std::endl;
		return 1;
	}
	BitcoinExchange bc;
	bc.loadDatabase();
	bc.processInput(av[1]);
	return 0;
}


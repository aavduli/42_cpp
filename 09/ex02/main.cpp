#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac <= 1) {
		std::cerr << "Usage: ./PmergeMe \"<Some numbers to be sorted>\"" << std::endl;
		return 1;
	}
	std::vector<int> input;
	PmergeMe mergeMe;
	for (int i = 1; i < ac; i++) {
		input.push_back(std::atoi(av[i]));
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < input.size(); i++)
		std::cout << input[i] << " ";
	std::cout << std::endl;
	mergeMe.mergeInsertSort(input);
	std::cout << "After: ";
	for (size_t i = 0; i < input.size(); i++)
		std::cout << input[i] << " ";
	std::cout << std::endl;
	std::cout << "Number of comparaison: " << mergeMe.nbrComp << std::endl;
	return 0;
}


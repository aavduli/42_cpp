#include "PmergeMe.hpp"
#include <sys/time.h>

static long getTimeMs() {
    struct timeval tv;
    gettimeofday(&tv, 0);
    return tv.tv_sec * 1000000 + tv.tv_usec;
}

int main(int ac, char **av) {
	if (ac <= 1) {
		std::cerr << "Usage: ./PmergeMe \"<Some numbers to be sorted>\"" << std::endl;
		return 1;
	}

	std::vector<int> vec;
	std::deque<int> deq;
	PmergeMe mergeMe;
	for (int i = 1; i < ac; i++) {
		vec.push_back(std::atoi(av[i]));
		deq.push_back(std::atoi(av[i]));
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	long startVec = getTimeMs();
	mergeMe.mergeInsertSort(vec);
	long endVec = getTimeMs();

	long startDeq = getTimeMs();
	mergeMe.mergeInsertSort(deq);
	long endDeq = getTimeMs();

	std::cout << "After: ";
	for (size_t i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to precess a range of " << ac - 1 << " elements with std::vector: " << endVec - startVec << " ms" << std::endl;
	std::cout << "Time to precess a range of " << ac - 1 << " elements with std::deq: " << endDeq - startDeq << " ms" << std::endl; 
	std::cout << "Number of comparaison with vector: " << mergeMe.getNbrComp() << std::endl;
	std::cout << "Number of comparaison with deque: " << mergeMe.getNbrComp() << std::endl;

	return 0;
}

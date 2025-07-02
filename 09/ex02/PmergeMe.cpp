#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

// PmergeMe::PmergeMe(const PmergeMe &other) : {}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	if (this != &rhs) {}
	return *this;
}

void	PmergeMe::binaryInsert(std::vector<int>& vec, int value, std::size_t end) {
	std::size_t low = 0, high = end;
	while (low < high) {
		std::size_t mid = (low + high) / 2;
		if (vec[mid] < value) {
			low = mid + 1;
			nbrComp += 1;
		}
		else
			high = mid;
	}
	vec.insert(vec.begin() + low, value);
}

void	PmergeMe::mergeInsertSort(std::vector<int>& input) {
	if (input.size() <= 1)
		return ;
	
	std::vector< std::pair<int, int> > pairs;
	int	leftover = -1;
	std::size_t i;
	for (i = 0; i + 1 < input.size(); i += 2) {
		if (input[i] > input[i + 1]) {
			pairs.push_back(std::make_pair(input[i], input[i + 1]));
			nbrComp += 1;
		}
		else
			pairs.push_back(std::make_pair(input[i + 1], input[i]));
	}
	if (input.size() % 2 != 0)
		leftover = input.back();
	std::vector<int> mainChain;
	for (std::size_t j = 0;j < pairs.size(); ++j)
		mainChain.push_back(pairs[j].first);
	mergeInsertSort(mainChain);
	for (std::size_t j = 0; j < pairs.size(); ++j)
		binaryInsert(mainChain, pairs[j].second, mainChain.size());
	if (leftover != -1)
		binaryInsert(mainChain, leftover, mainChain.size());
	input = mainChain;
}

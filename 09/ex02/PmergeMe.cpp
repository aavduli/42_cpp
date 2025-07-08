#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : nbrComp(0) {}

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
		nbrComp += 1; 
		if (vec[mid] < value) {
			low = mid + 1;
		}
		else
			high = mid;
	}
	vec.insert(vec.begin() + low, value);
}

std::vector<int> PmergeMe::jacobsthalIndices(int size) {
	std::vector <int> result;
	std::vector<int> jacob;

	jacob.push_back(0);
	if (size == 0)
		return result;
	jacob.push_back(1);
	int j = 2;
	while(true) {
		int next = jacob[j - 1] + (2 * jacob[j - 2]);
		if (next >= size)
			break;
		jacob.push_back(next);
		++j;
	}
	for (std::size_t i = 1; i < jacob.size(); ++i) {
		if (std::find(result.begin(), result.end(), jacob[i]) == result.end())
			result.push_back(jacob[i]);
	}
	for (int i = 1; i < size; ++i) {
		bool found = false;
		for (std::size_t j = 0; j < result.size(); ++j) {
			if (result[j] == i) {
				found = true;
				break;
			}
		}
		if (!found)
			result.push_back(i);
	}
	return result;
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
		}
		else
			pairs.push_back(std::make_pair(input[i + 1], input[i]));
		nbrComp += 1;
	}
	if (input.size() % 2 != 0) {
		leftover = input[input.size() - 1];
	}
	std::vector<int> mainChain;
	std::vector<int> pend;
	for (std::size_t j = 0;j < pairs.size(); ++j) {
		mainChain.push_back(pairs[j].first);
		pend.push_back(pairs[j].second);
	}	
	mergeInsertSort(mainChain);
	std::vector<int> order = jacobsthalIndices(pend.size());
	for (size_t i = 0; i < order.size(); ++i) {
		std::cout << order[i] << " ";
	}
	std::cout << std::endl;
	for (std::size_t j = 0; j < order.size(); ++j)
		binaryInsert(mainChain, pend[order[j]], mainChain.size());
	if (leftover != -1)
		binaryInsert(mainChain, leftover, mainChain.size());
	input = mainChain;
}

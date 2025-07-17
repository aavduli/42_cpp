#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : nbrComp(0) {}

PmergeMe::PmergeMe(const PmergeMe &other) {(void)other;}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {(void)rhs; return *this;}

int PmergeMe::getNbrComp() {
	return nbrComp;
}

void	PmergeMe::binaryInsert(std::vector<int>& vec, int value, int rightLimit) {
	int left = 0;
	std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), rightLimit);
	int right = std::distance(vec.begin(), it);
	while (left < right) {
		std::size_t mid = (left + right) / 2;
		if (vec[mid] < value) {
			left = mid + 1;
		}
		else
			right = mid;
		nbrComp++;
	}
	vec.insert(vec.begin() + left, value);
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
	for (std::size_t i = 0; i < jacob.size(); ++i) {
		if (std::find(result.begin(), result.end(), jacob[i]) == result.end()) {
			if (jacob[i] != 0)
				result.push_back(jacob[i]);
		}
	}
	for (int i = 0; i < size; ++i) {
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
	std::cout << std::endl;
	return result;
}

void	PmergeMe::mergeInsertSort(std::vector<int>& input) {
	if (input.size() <= 1)
		return ;
	
	std::vector< std::pair<int, int> > pairs;
	int	leftover = -1;
	std::size_t i;
	for (i = 0; i + 1 < input.size(); i += 2) {
		if (input[i] > input[i + 1])
			pairs.push_back(std::make_pair(input[i], input[i + 1]));
		else
			pairs.push_back(std::make_pair(input[i + 1], input[i]));
		nbrComp += 1;
	}
	if (input.size() % 2 != 0) 
		leftover = input[input.size() - 1];
	std::vector<int> mainChain;
	std::vector<int> pend;
	for (std::size_t j = 0;j < pairs.size(); ++j) {
		mainChain.push_back(pairs[j].first);
		pend.push_back(pairs[j].second);
	}
	mergeInsertSort(mainChain);
	std::vector<int> order = jacobsthalIndices(pend.size());
	for (std::size_t j = 0; j < order.size(); ++j) {
		if (order[j] < static_cast<int>(pend.size())) {
			int loser = pend[order[j]];
			int winner = pairs[order[j]].first;
			binaryInsert(mainChain, loser, winner);
		}
	}
	if (leftover != -1)
		binaryInsert(mainChain, leftover, mainChain.size());
	input = mainChain;
}


//deque version; 

void	PmergeMe::binaryInsert(std::deque<int>& deq, int value, int rightLimit) {
	int left = 0;
	std::deque<int>::iterator it = std::find(deq.begin(), deq.end(), rightLimit);
	int right = std::distance(deq.begin(), it);
	while (left < right) {
		std::size_t mid = (left + right) / 2;
		if (deq[mid] < value) {
			left = mid + 1;
		}
		else
			right = mid;
		deqComp++;
	}
	deq.insert(deq.begin() + left, value);
}

void	PmergeMe::mergeInsertSort(std::deque<int>& input) {
	if (input.size() <= 1)
		return ;
	std::deque< std::pair<int, int> > pairs;
	int	leftover = -1;
	std::size_t i;
	for (i = 0; i + 1 < input.size(); i += 2) {
		if (input[i] > input[i + 1])
			pairs.push_back(std::make_pair(input[i], input[i + 1]));
		else
			pairs.push_back(std::make_pair(input[i + 1], input[i]));
		deqComp += 1;
	}
	if (input.size() % 2 != 0) 
		leftover = input[input.size() - 1];
	std::deque<int> mainChain;
	std::deque<int> pend;
	for (std::size_t j = 0;j < pairs.size(); ++j) {
		mainChain.push_back(pairs[j].first);
		pend.push_back(pairs[j].second);
	}
	mergeInsertSort(mainChain);
	std::vector<int> order = jacobsthalIndices(pend.size());
	for (std::size_t j = 0; j < pend.size(); ++j) {
		if (order[j] < static_cast<int>(pend.size())) {
			int loser = pend[order[j]];
			int winner = pairs[order[j]].first;
			binaryInsert(mainChain, loser, winner);
		}
	}
	if (leftover != -1)
		binaryInsert(mainChain, leftover, mainChain.size());
	input = mainChain;
}

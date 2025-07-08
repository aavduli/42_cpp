#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <utility>
# include <vector>
# include <deque>
# include <cstdlib>
# include <algorithm>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	~PmergeMe();

	PmergeMe &operator=(const PmergeMe &rhs);

	size_t	nbrComp;
	void mergeInsertSort(std::vector<int>& input);
	void binaryInsert(std::vector<int>& vec, int value, std::size_t end);
	std::vector<int> jacobsthalIndices(int size);
};

#endif

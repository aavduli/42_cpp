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
private:
	size_t	nbrComp;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	~PmergeMe();

	PmergeMe &operator=(const PmergeMe &rhs);
private:
	std::vector<int> jacobsthalIndices(int size);
	void binaryInsert(std::vector<int>& vec, int value, int rightLimit);
	void mergeInsertSort(std::vector<int>& input);
};

#endif

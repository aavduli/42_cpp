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
	size_t deqComp;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	~PmergeMe();

	PmergeMe &operator=(const PmergeMe &rhs);

	std::vector<int> jacobsthalIndices(int size);

	//vector version
	void binaryInsert(std::vector<int>& vec, int value, int rightLimit);
	void mergeInsertSort(std::vector<int>& input);

	//deque version
	void binaryInsert(std::deque<int>& deq, int value, int rightLimit);
	void mergeInsertSort(std::deque<int>& input);

	int getNbrComp();
};

#endif

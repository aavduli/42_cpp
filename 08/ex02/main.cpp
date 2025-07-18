#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "====MutantStack=====" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << "====Deque=====" << std::endl;
		std::deque<int> test;
		test.push_front(5);
		test.push_front(17);
		std::cout << test.front() << std::endl;
		test.pop_front();
		std::cout << test.size() << std::endl;
		test.push_back(3);
		test.push_back(5);
		test.push_back(737);
		test.push_back(0);
		std::deque<int>::iterator it = test.begin();
		std::deque<int>::iterator ite = test.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::deque<int> s(test);
	}
	return 0;
}

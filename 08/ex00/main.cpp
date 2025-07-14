#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	try {
		std::vector<int>::iterator  it = easyfind(vec, 10);
		std::cout << "Found: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}

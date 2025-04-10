#include "Array.hpp"

int main() {

	Array<int> a(5);
	Array<int> b(5);

	srand(time(NULL));
	for (unsigned int i = 0; i < a.size(); i++) {
		a[i] = rand() % 100;
	}
	b = a;
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << "a [" << i << "] = " << a[i] << std::endl;
		std::cout << "b [" << i << "] = " << b[i] << std::endl;
	}
	try {
		std::cout << a[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}

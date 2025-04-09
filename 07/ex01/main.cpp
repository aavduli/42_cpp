#include "template.hpp"

void printInt(int& x) {
	std::cout << x << std::endl;
}

int main() {
	srand(time(NULL));
	int arr[5] = {rand()%10, rand()%10, rand()%10 , rand()%10, rand()%10};
	iter(arr, 5, printInt);

	return 0;
}
 
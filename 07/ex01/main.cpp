#include "template.hpp"

void printInt(char &x) {
	std::cout << x << std::endl;
}

void setInt(char &x) {
	x = 'g';
}

int main() {
	srand(time(NULL));
	char arr[5] = {'A', 'V', 'b', 'a', 'c'};
	iter(arr, 5, printInt);
	iter(arr, 5, setInt);
	iter(arr, 5, printInt);

	return 0;
}
 
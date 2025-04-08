#include "template.hpp"
#include <cstdlib>

int main() {
	
	srand(time(NULL));
	int a = rand()%100;
	int b = rand()%100;

	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "Biggest number: " << max(a, b) << std::endl;
	std::cout << "Smallest number: " << min(a, b) << std::endl;
	std::cout << "before swap: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl; 
	swap(a , b);
	std::cout << "Swapped number\n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	return 0;
}

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

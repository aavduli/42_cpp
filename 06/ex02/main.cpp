#include "Base.hpp"


int main() {
	
	Base* test = generate();
	Base* test2 = generate();
	Base& test3(*test2);

	identify(test);
	identify(test3);
}


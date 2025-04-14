#include "Base.hpp"

Base::~Base() {};

Base* generate() {

	srand(time(NULL));
	int ran = rand()%10;
	if (ran < 4)
		return new A;
	else if (ran > 3 && ran < 7)
		return new B;
	else 
		return new C;
}

void identify(Base *p) {
	
	std::cout << "Pointer:\n";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {

	std::cout << "Reference:\n";
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...) {};
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...) {};
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...) {};
}

#include "Serializer.hpp"

int main() {

	Data original;
	original.name = "Carla";
	original.age = 27;

	std::cout << "Original pointer: " << &original << std::endl;

	uintptr_t raw = Serializer::serialize(&original);
	std::cout << "Serialized (raw): " << raw << std::endl;

	Data* deserialized = Serializer::deserialize(raw);
	std::cout << "Deserialized pointer: " << deserialized << std::endl;
	std::cout << "Name: " << deserialized->name << "\nAge: " << deserialized->age << std::endl;
	
	return 0;
}


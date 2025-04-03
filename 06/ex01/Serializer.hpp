#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <string>
# include <fstream>

class Serializer {
private:
	Serializer();
	Serializer();
	Serializer(const Serializer &other);
	~Serializer();

	Serializer &operator=(const Serializer &rhs);

public:
	

};

std::ostream& operator<<(std::ostream& os, const Serializer &b);

#endif

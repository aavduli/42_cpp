#ifndef BITCOINECHANGE_HPP
# define BITCOINECHANGE_HPP
# include <iostream>
# include <string>
# include <fstream>

class BitcoinEchange {
private:


public:
	BitcoinEchange();
	BitcoinEchange();
	BitcoinEchange(const BitcoinEchange &other);
	~BitcoinEchange();

	BitcoinEchange &operator=(const BitcoinEchange &rhs);

};

std::ostream& operator<<(std::ostream& os, const BitcoinEchange &b);

#endif

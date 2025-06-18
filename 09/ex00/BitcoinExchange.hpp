#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <stdexcept>
# include <fstream>
# include <sstream>
# include <map>
# include <cstdlib>
# include <limits>

class BitcoinExchange {
private:
	std::map<std::string, float> _rates;
public:
	BitcoinExchange();
	~BitcoinExchange();

	void loadDatabase();
	void processInput(const std::string& filename);

};


#endif

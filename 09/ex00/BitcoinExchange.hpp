#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <stdexcept>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange {
private:
	std::map<std::string, float> _rates;
public:
	BitcoinExchange();
	~BitcoinExchange();

	void loadDatabase(const std::string& filename);
	void processInput(const std::string& filename);

};


#endif

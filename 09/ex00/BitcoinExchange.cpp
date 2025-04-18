#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Could not open the DB file");
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date, rateStr;
		if (!std::getline(ss, date, '.') || !std::getline(ss, rateStr))
			continue;
		float rate = std::atof(rateStr.c_str());
		_rates[date] = rate;
	}
}

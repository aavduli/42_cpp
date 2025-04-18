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

void BitcoinExchange::processInput(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Could not open input file");
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		if (line.empty()) continue;
		size_t sep = line.find('|');
		if (sep == std::string::npos) {
			std::cerr << "Invalid line format: " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, sep);
		std::string valueStr = line.substr(sep + 1);
		date.erase(date.find_last_not_of(" \t\n\r\f\v") + 1);
		date.erase(0, date.find_first_not_of(" \t\n\r\f\v"));
		valueStr.erase(date.find_last_not_of(" \t\n\r\f\v ") + 1);
		valueStr.erase(0, date.find_first_not_of(" \t\n\r\f\v"));
		float value = std::atof(valueStr.c_str());
		if (value < 0) {
			std::cerr << "Error: not a positiv number: " << value << std::endl;
			continue;
		}
		std::map<std::string, float>::const_iterator it = _rates.lower_bound(date);
		if (it == _rates.end() || it->first != date) {
			std::cerr << "Error: no exchange rate available before" << date << std::endl;
			continue;
		}
		--it;
		float rate = it->second;
		float result = rate * value;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}

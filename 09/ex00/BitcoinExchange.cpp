#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _rates() {}

BitcoinExchange::~BitcoinExchange() {}


void BitcoinExchange::loadDatabase() {
	std::ifstream file;
	file.open("data.csv");
	if (!file.is_open()) {
		std::cerr << "failed to open file" << std::endl;
		return ;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::stringstream ss(line);
		std::string date;
		std::string amountStr;
		float amount;
		if (std::getline(ss, date, ',') && std::getline(ss, amountStr)) {
			try {
				amount = std::atof(amountStr.c_str());
				_rates.insert(std::pair<std::string, float>(date, amount));
			} catch(std::exception &e) {
				std::cout << "DB Exceptions: " << e.what() << std::endl;
			}
		}
	}
	// std::map<std::string, float>::iterator it;
	// for (it = _rates.begin(); it != _rates.end(); it++) {
	// 	std::cout << it->first << " => " << it->second << std::endl;
	// }
	file.close();
	return ;
}

void BitcoinExchange::processInput(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "failed to open input file\n" << std::endl;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::stringstream ss(line);
		std::string date;
		std::string valueStr;
		float value;
		if (std::getline(ss, date, '|') && (std::getline(ss, valueStr))) {
			while (!date.empty() && date[date.size() - 1] == ' ') 
				date.erase(date.size() - 1);
			while (!valueStr.empty() && valueStr[0] == ' ')
				valueStr.erase(0, 1);
		}
		try {
			value = std::atof(valueStr.c_str());
			std::map<std::string, float>::iterator it = _rates.find(date);
			if (valueStr[0] == '-') {
				std::cout << "Error: not a positiv number" << std::endl;
			}
			if (value > std::numeric_limits<float>::max())
				std::cout << "Errors: too large number" << std::endl;
			if (it != _rates.end()) {
				std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
			}
			else {
				it = _rates.lower_bound(date);
				if (it != _rates.begin()) {
					--it;
				}
				std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
			}
		} catch (std::exception &e) {
			std::cout << "Output Exception: " << e.what() << std::endl;
		}
	}
	file.close();
	return ;
}

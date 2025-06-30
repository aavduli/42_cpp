#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _rates() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _rates(other._rates) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)  {
	if (this != &rhs) {
		this->_rates.clear();
		this->_rates = rhs._rates;
	}
}

bool BitcoinExchange::validNbr(float value) {
	if (value < 0.0f) {
		std::cout << "Error: not a positiv number" << std::endl;
		return false;
	}
	if (value > 1000.0f) {
		std::cout << "Error: too large number: " << value << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::validDate(std::string date) {
	std::stringstream ss(date);
	std::string year, month, day;

	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '-');
	if (year.size() != 4) {
		std::cout << "Error: invalid date: " << date << std::endl;
		return false;
	}
	int _month = std::atoi(month.c_str());
	int _day = std::atoi(day.c_str());
	if (_month < 1 || _month > 12 || _day < 1 || _day > 31) {
		std::cout << "Error: invalid date: " << date << std::endl;
		return false;
	}
	return true;
}

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
		value = std::atof(valueStr.c_str());
		if (validNbr(value) && validDate(date)) {
			try {
				std::map<std::string, float>::iterator it = _rates.find(date);
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
		else
			continue ;
	}
	file.close();
	return ;
}

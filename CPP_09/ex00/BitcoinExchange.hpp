#pragma once
#include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange() = default;
		BitcoinExchange(const BitcoinExchange &src) = default;
		BitcoinExchange & operator=(const BitcoinExchange &rhs) = default;
	private:
		std::map<std::string, float> _db;
		void csvToMap();
};

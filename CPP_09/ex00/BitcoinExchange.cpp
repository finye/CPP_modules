#include <iostream>
#include "BitcoinExchange.hpp"
#include <string.h>
#include <fstream>

BitcoinExchange::BitcoinExchange()
{
	this->csvToMap();
}

void BitcoinExchange::csvToMap()
{
	std::ifstream data("./data.csv");
	if (!data)
	{
		//throw error
	}
	std::string line;
	std::getline(data, line);
	if (line != "date,exchange_rate")
		//throw err
	while(std::getline(data, line))
	{
		//std::cout << "The line is" << line << std::endl;
		//std::size_t comma = line.find(",");
		//std::cout << "The date:_" << line.substr(0,comma) << "_val:_" << line.substr(comma+1) << std::endl;
		//_db[line.substr(0,comma)] = std::stof(line.substr(comma));
		_db["lala"] = 5;
		_db["lala2"] = 6;
	}
	std::map<std::string, float>::iterator it = _db.begin();
	while (it != _db.end())
	{
		std::cout <<"___" << it->first <<"___" << it->second << std::endl;
		it++;
	}
}

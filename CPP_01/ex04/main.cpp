/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:53:54 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/15 17:24:53 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string &checkLine(std::string &line, const std::string &toBeReplaced, const std::string &newStr)
{
	if (toBeReplaced.empty())
		return line;

	size_t pos = 0;
	while ((pos = line.find(toBeReplaced, pos)) != std::string::npos)
	{
		std::cout << "searched STR found at pos " << pos << std::endl;
		// here we should replace the stuff!
		line.erase(pos, toBeReplaced.length());
		line.insert(pos, newStr);
		pos = pos + newStr.length();
	}
	std::cout << "Line AFTER Replacing " << line << std::endl;
	return line;
}
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <str1> <str2>" << std::endl;
		return 1;
	}
	std::string toBeReplaced = argv[2];
	std::string newStr = argv[3];
	std::string fileName = argv[1] + std::string(".replace");

	std::ifstream ifs;
	std::ofstream ofs;

	ifs.open(argv[1]);
	ofs.open(fileName);

	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cout << "Error with file!" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(ifs, line))
	{
		checkLine(line, toBeReplaced, newStr);
		ofs << line;
	}
	ofs.close();
	return 0;
}

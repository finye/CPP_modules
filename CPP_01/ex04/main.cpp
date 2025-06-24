/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:53:54 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/16 15:17:07 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string &replaceContent(std::string &content, const std::string &toBeReplaced, const std::string &newStr)
{
	size_t pos = 0;

	while ((pos = content.find(toBeReplaced, pos)) != std::string::npos)
	{
		content.erase(pos, toBeReplaced.length());
		content.insert(pos, newStr);
		pos = pos + newStr.length();
	}
	return content;
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
	std::string fileName = argv[1];
	std::string newFileName = fileName + ".replace";

	if (toBeReplaced.empty())
	{
		std::cout << "Nothing to be replaced in here." << std::endl;
		return 1;
	}

	std::ifstream ifs(fileName);
	if (!ifs.is_open())
	{
		std::cout << "Error opening " << fileName << std::endl;
		return 1;
	}

	std::stringstream buffer;
	std::string fileContent;
	buffer << ifs.rdbuf();
	fileContent = buffer.str();

	replaceContent(fileContent, toBeReplaced, newStr);

	std::ofstream ofs(newFileName);
	if (!ofs.is_open())
	{
		ifs.close();
		std::cout << "Error creating " << newFileName << std::endl;
		return 1;
	}

	ofs << fileContent;
	ifs.close();
	ofs.close();
	return 0;
}

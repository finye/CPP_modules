#include <iostream>
#include "ScalarConverter.hpp"

void runTest(const std::string& input)
{
	std::cout << "\n--- Testing: \"" << input << "\" ---" << std::endl;
	ScalarConverter::convert(input);
}

int main()
{
	std::cout << "\n___________CHAR____________" << std::endl;
	runTest("a");
	runTest("z");
	runTest("0");
	runTest("9");
	runTest(" ");
	runTest("*");
	runTest("µ");
	runTest("~");

	std::cout << "\n___________INT____________" << std::endl;
	runTest("0");
	runTest("42");
	runTest("-42");
	runTest("2147483647");   // INT_MAX
	runTest("-2147483648");  // INT_MIN
	runTest("2147483648");   // INT_MAX + 1 (overflow)
	runTest("31");
	runTest("32");
	runTest("127"); // DEL
	runTest("128");
	runTest("255");
	runTest("-1");
	runTest("-128");
	runTest("-129");

	std::cout << "\n___________FLOAT____________" << std::endl;
	runTest("0.0f");
	runTest("42.0f");
	runTest("-42.5f");
	runTest("0.0f");
	runTest("4.2f");
	runTest("-4.2f");
	runTest("nanf");
	runTest("+inff");
	runTest("-inff");
	runTest("3.14159f");
	runTest("123456.789f");

	std::cout << "\n___________DOUBLE____________" << std::endl;
	runTest("0.0");
	runTest("42.0");
	runTest("-42.0");
	runTest("-42.5");
	runTest("0.0");
	runTest("4.2");
	runTest("-4.2");
	runTest("nan");
	runTest("+inf");
	runTest("-inf");
	runTest("3141592653589793.0");
	runTest("2147483648.0");
	runTest("-2147483649.0");

	std::cout << "\n___________INVALID INPUTS____________" << std::endl;
	runTest("");
	runTest("moi");
	runTest("42.0.0");
	runTest("42ff");
	runTest("++42");
	runTest("--42");
	runTest("42.f");
	runTest(".42");
	runTest("42.");
}

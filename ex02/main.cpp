#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "STRING ADDRESS: " << &string << std::endl;
	std::cout << "STRING PTR: " << stringPTR << std::endl;
	std::cout << "STRING REF: " << &stringREF << std::endl;

	std::cout << "STRING VALUE: " << string << std::endl;
	std::cout << "STRING PTR VALUE: " << *stringPTR << std::endl;
	std::cout << "STRING REF VALUE: " << stringREF << std::endl;
}
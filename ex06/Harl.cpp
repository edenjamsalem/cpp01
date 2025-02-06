#include "./Harl.hpp"

Harl::Harl() {}

Harl::Harl(const Harl& other) {
	(void)other;
}

Harl& Harl::operator=(const Harl& other)
{
	(void)other;
	return *this;
}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I really do!\n" << std::endl;
};

void Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout <<  "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!\n" << std::endl;
};

void Harl::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month.\n";
	std::cout << std::endl;
};

void Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
};

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fns[4])() = {
				&Harl::debug,
				&Harl::info,
				&Harl::warning,
				&Harl::error
			};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*fns[i])();
			break ;
		}
	}
}
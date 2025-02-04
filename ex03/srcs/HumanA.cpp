#include "../includes/unnecessarry_violence.h"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {}

HumanA::HumanA(const HumanA& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_weapon = other._weapon;
	}
}

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_weapon = other._weapon;
	}
	return (*this);
}

HumanA::~HumanA() {}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
}

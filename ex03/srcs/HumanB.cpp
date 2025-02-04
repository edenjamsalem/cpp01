#include "../includes/unnecessarry_violence.h"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::HumanB(const HumanB& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_weapon = other._weapon;
	}
}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_weapon = other._weapon;
	}
	return (*this);
}

HumanB::~HumanB() {}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
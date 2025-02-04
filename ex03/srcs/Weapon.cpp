#include "../includes/unnecessarry_violence.h"

Weapon::Weapon() : _type() {}

Weapon::Weapon(const Weapon& other)
{
	if (this != &other)
		this->_type = other._type;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Weapon::~Weapon() {}

Weapon::Weapon(std::string type) : _type(type) {}

const std::string& Weapon::getType(void)
{
	return (_type);
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}
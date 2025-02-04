#include "../includes/Zombie.hpp"

Zombie::Zombie()
    : _name("") {};

Zombie::Zombie(const Zombie& other)
{
    _name = other._name;
}

Zombie& Zombie::operator=(const Zombie& other)
{
    if (this != &other)
        _name = other._name;
    return *this;
}

Zombie::~Zombie()
{
    std::cout << _name << ": terminated\n";
}

Zombie::Zombie(std::string name)
    : _name(name) {};

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
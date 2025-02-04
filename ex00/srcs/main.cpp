#include "../includes/Zombie.hpp"

int main()
{
    Zombie *Zombie1 = newZombie("Bob");

    Zombie1->announce();
    randomChump("Jim");
    delete Zombie1;
}
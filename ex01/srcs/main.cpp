#include "../includes/Zombie.hpp"

int main()
{
    Zombie *horde;
    int     N = 1;

    horde = zombieHorde(N, "Bob");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    
    delete[] horde;
}
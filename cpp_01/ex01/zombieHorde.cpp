#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* ZombieArr = new Zombie[N];
	for (int i = 0; i < N; i++)
		ZombieArr[i].setName(name);
	return (ZombieArr);
}
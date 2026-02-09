#include <iostream>

int main(void)
{
	std::string bian = "HI THIS IS BRAIN";

	std::string *bainptr = &bian;
	std::string &brainref = bian;

	std::cout << &bian << std::endl;
	std::cout << bainptr << std::endl;
	std::cout << &brainref << std::endl;

	std::cout << bian << std::endl;
	std::cout << *bainptr << std::endl;
	std::cout << brainref << std::endl;
}
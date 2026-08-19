#include "iter.hpp"
#include <iostream>

void	printStuff(int c)
{
	std::cout << c << std::endl;
}

void	shiftOne(char i)
{
	std::cout << i + 1 << std::endl;
}

int	main()
{
	std::string	str = "Deez nuts";
	int	arr[] = {1, 2, 3, 4, 5};
	iter(&str[0], str.size(), shiftOne);
	iter(&arr[0], sizeof(arr) / sizeof(arr[0]), printStuff);
}
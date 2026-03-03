#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: not enough arguments." << std::endl;
		return (1);
	}

	std::string file = av[1];
	std::string toReplace = av[2];
	std::string replaceWith = av[3];

	std::ifstream inputFile(file.c_str());
	if (!inputFile.is_open())
	{
		return (1);
	}
	std::string content;
	std::string line;

	while (std::getline(inputFile, line))
	{
		content += line;
		if (!inputFile.eof())
			content += "\n";
	}
	inputFile.close();

	std::string replacedContent = replacer(content, toReplace, replaceWith);

	std::ofstream outFile((file + ".replace").c_str());
	if (!outFile.is_open())
	{
		return (1);
	}
	outFile << replacedContent;
	outFile.close();
	return (0);
}
#include "Sed.hpp"

std::string replacer(const std::string& fileContent, const std::string& toReplace, const std::string& replaceWith)
{
	if (toReplace.empty())
		return (fileContent);
	std::string result;
	size_t pos = 0;
	size_t found;

	while ((found = fileContent.find(toReplace, pos)) != std::string::npos)
	{
		result.append(fileContent, pos, found - pos);
		result += replaceWith;
		pos = found + toReplace.length();
	}
	result.append(fileContent, pos, fileContent.length() - pos);
	return (result);
}
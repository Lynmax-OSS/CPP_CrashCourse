#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{
	(void) other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &other)
{
	(void) other;
	return *this;
}

bool	isChar(const std::string &str)
{
	if (str.size() != 1)
		return (false);
	unsigned char c = static_cast<unsigned char>(str[0]);
	if (std::isdigit(c))
		return (false);
	if (!std::isprint(c))
		return (false);
	return (true);
}

bool	isInt(const std::string &str)
{
	size_t i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; str[i]; i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
	}
		return (true);
}

bool	isFloat(const std::string &str)
{
	size_t	i = 0;
	bool	seenDot = false;
	bool	seenNum = false;

	if (str.empty() || str[str.size() - 1] != 'f')
		return (false);
	if (i < str.size() - 1 && (str[i] == '+' || str[i] == '-'))
		i++;

	while (i < str.size() - 1)
	{
		if (std::isdigit(static_cast<unsigned char> (str[i])))
			seenNum = true;
		else if (str[i] == '.' && !seenDot)
			seenDot = true;
		else
			return (false);
		i++;
	}
	return (seenNum);
}

bool	isDouble(const std::string &str)
{
	size_t	i = 0;
	bool	seenDot = false;
	bool	seenNum = false;
	if (i < str.size() && (str[i] == '+' || str[i] == '-'))
		i++;

	while (i < str.size())
	{
		if (std::isdigit(static_cast<unsigned char> (str[i])))
			seenNum = true;
		else if (str[i] == '.' && !seenDot)
			seenDot = true;
		else
			return (false);
		i++;
	}
	return (seenNum);
}

bool	isPseudoFloat(const std::string &str)
{
	return (str == "nanf" || str == "+inff" || str == "-inff");
}

bool	isPseudoDouble(const std::string &str)
{
	return (str == "nan" || str == "+inf" || str == "-inf");
}



dataType check_type(const std::string &str)
{
	if (isChar(str))
		return (CHAR);
	else if (isPseudoFloat(str))
		return (FLOAT);
	else if (isPseudoDouble(str))
		return (DOUBLE);
	else if (isInt(str))
		return (INT);
	else if (isFloat(str))
		return (FLOAT);
	else if (isDouble(str))
		return (DOUBLE);
	else
		return (INVALID);
}

void	ScalarConverter::convert(const std::string &str)
{
	dataType type = check_type(str);
	double	value = static_cast<double>(str[0]);
	switch (type)
	{
	case CHAR:
		
		break;
	case INT:
		int 
	default:
		break;
	}
}

int main ()
{
}
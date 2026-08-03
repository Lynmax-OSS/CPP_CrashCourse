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

float parsePseudoFloat(const std::string& str)
{
	if (str == "nanf")  return std::numeric_limits<float>::quiet_NaN();
	if (str == "+inff") return std::numeric_limits<float>::infinity();
	if (str == "-inff") return -std::numeric_limits<float>::infinity();
	return 0.0f;
}

double parsePseudoDouble(const std::string& str)
{
	if (str == "nan")  return std::numeric_limits<double>::quiet_NaN();
	if (str == "+inf") return std::numeric_limits<double>::infinity();
	if (str == "-inf") return -std::numeric_limits<double>::infinity();
	return 0.0;
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

void	printALL(double value)
{
	if (std::isprint(value))
		std::cout << "char: " << static_cast<char> (value) << std::endl;
	else if (value < 32)
		std::cout << "char: " << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;

}

void	ScalarConverter::convert(const std::string &str)
{
	dataType type = check_type(str);
	switch (type)
	{
		case CHAR:
		{
			char c = str[0];
			break;
		}
		case INT:
		{
			long i = std::strtol(str.c_str(), NULL, 10);
			break;
		}
		case FLOAT:
		{
			float f = isPseudoFloat(str) ? parsePseudoFloat(str) : std::strtof(str.c_str(), NULL);
			break;
		}
		case DOUBLE:
		{
			double d = isPseudoDouble(str) ? parsePseudoDouble(str) : std::strtod(str.c_str(), NULL);
			break;
		}
		case INVALID:
		{
			std::cout << "Invalid litteral" << std::endl;
			break;
		}
	}
}

int main ()
{
}
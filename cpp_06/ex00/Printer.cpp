#include "ScalarConverter.hpp"

static void printChar(double d)
{
    if (std::isnan(d) || std::isinf(d) ||
        d < static_cast<double>(std::numeric_limits<char>::min()) ||
        d > static_cast<double>(std::numeric_limits<char>::max()))
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    char c = static_cast<char>(d);
    if (std::isprint(static_cast<unsigned char>(c)))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

static void printInt(double d)
{
    if (std::isnan(d) || std::isinf(d) ||
        d < static_cast<double>(std::numeric_limits<int>::min()) ||
        d > static_cast<double>(std::numeric_limits<int>::max()))
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    int i = static_cast<int>(d);
    std::cout << "int: " << i << std::endl;
}

static void printFloat(double d)
{
    float f = static_cast<float>(d);
    std::cout << std::fixed;
    std::cout.precision(1);
    if (std::isnan(f))
        std::cout << "float: nanf" << std::endl;
    else if (std::isinf(f))
        std::cout << "float: " << (f > 0 ? "+inff" : "-inff") << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
}

static void printDouble(double d)
{
    std::cout << std::fixed;
    std::cout.precision(1);
    if (std::isnan(d))
        std::cout << "double: nan" << std::endl;
    else if (std::isinf(d))
        std::cout << "double: " << (d > 0 ? "+inf" : "-inf") << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

void printAll(double d)
{
    printChar(d);
    printInt(d);
    printFloat(d);
    printDouble(d);
}
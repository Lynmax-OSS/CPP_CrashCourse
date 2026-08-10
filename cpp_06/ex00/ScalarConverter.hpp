#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <limits>
# include <cmath>
# include <climits>
# include <cctype>
# include <cstdlib>

enum dataType {CHAR, INT, FLOAT, DOUBLE, INVALID};

class ScalarConverter
{
	private:
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter &other);
		ScalarConverter(ScalarConverter &other);
		static void	convert(const std::string &str);
};

void	printAll(double d);

#endif
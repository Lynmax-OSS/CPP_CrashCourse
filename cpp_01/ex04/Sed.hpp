#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

std::string replacer(const std::string& fileContent, const std::string& toReplace, const std::string& replaceWith);

#endif
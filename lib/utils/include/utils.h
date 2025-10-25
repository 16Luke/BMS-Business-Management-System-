#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <cctype>

enum class StringType {
    ALPHA_NOT_EMPTY
};

bool iAlpha(const std::string& str);
std::string removeBlanks(std::string& str);
bool checkString(const std::string& str, StringType type, std::string field);
#endif // UTILITIES_H
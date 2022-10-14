#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
#include <typeinfo>



bool isChar(char *arg);
bool isInt(char *arg);
bool isFloat(char *arg);
bool isDouble(char *arg);

int inff(std::string str);

void convert(char *arg);
int validFloat(char *arg);

#endif
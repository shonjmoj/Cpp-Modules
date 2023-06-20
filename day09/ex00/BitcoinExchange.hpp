#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

#define MAX_INT = 2147483647

int parseDbFile(std::map<std::string, double> &db, std::string &dbDate, double dbValue);

#endif
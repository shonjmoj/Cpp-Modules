#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
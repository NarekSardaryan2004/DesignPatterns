#include "Memory.hpp"
#include <iostream>

void Memory::load(long position, const std::string& data)
{
    std::cout << "Memory: Load '" << data << "' at " << position << "\n";
}
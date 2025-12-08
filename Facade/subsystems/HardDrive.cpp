#include "HardDrive.hpp"
#include <iostream>

std::string HardDrive::read(long position, int size)
{
    std::cout << "HardDrive: Read " << size << " bytes at " << position << "\n";
    return "OS_BOOT_CODE";
}
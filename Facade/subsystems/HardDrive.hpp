#ifndef HARDDRIVE_HPP
#define HARDDRIVE_HPP

#include <string>

class HardDrive
{
public:
    std::string read(long position, int size);
};

#endif // HARDDRIVE_HPP
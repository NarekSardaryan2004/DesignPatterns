#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <string>

class Memory
{
public:
    void load(long position, const std::string& data);
};

#endif // MEMORY_HPP
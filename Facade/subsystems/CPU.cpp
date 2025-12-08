#include "CPU.hpp"
#include <iostream>

void CPU::freeze()
{
    std::cout << "CPU: Freeze\n";
}

void CPU::jump(long position)
{
    std::cout << "CPU: Jump to " << position << "\n";
}

void CPU::execute()
{
    std::cout << "CPU: Execute\n";
}
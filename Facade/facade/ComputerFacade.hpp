#ifndef COMPUTERFACADE_HPP
#define COMPUTERFACADE_HPP

#include <../subsystems/CPU.hpp>
#include <../subsystems/Memory.hpp>
#include <../subsystems/HardDrive.hpp>

class ComputerFacade
{
public:
    ComputerFacade();

    void start();
private:
    CPU m_cpu;
    Memory m_memory;
    HardDrive m_hd;

    const long BOOT_ADDRESS = 0x00AF;
    const int BOOT_SIZE = 64;
};

#endif // COMPUTERFACADE_HPP
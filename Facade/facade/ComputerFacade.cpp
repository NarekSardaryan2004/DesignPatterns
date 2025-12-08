#include "ComputerFacade.hpp"
#include <iostream>

ComputerFacade::ComputerFacade() {}

void ComputerFacade::start()
{
    std::cout << "=== Starting Computer ===\n";

    m_cpu.freeze();

    std::string bootData = m_hd.read(BOOT_ADDRESS, BOOT_SIZE);

    m_memory.load(BOOT_ADDRESS, bootData);

    m_cpu.jump(BOOT_ADDRESS);
    m_cpu.execute();

    std::cout << "=== Computer started ===\n";
}
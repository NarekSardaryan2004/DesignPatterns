#ifndef OLDPRINTER_HPP
#define OLDPRINTER_HPP

#include <iostream>
#include <string>

class OldPrinter
{
public:
    void printText(const std::string& message) 
    {
        std::cout << "Old printer prints: " << message << std::endl;
    }
};

#endif // OLDPRINTER_HPP
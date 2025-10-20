#ifndef INEWPRINTER_HPP
#define INEWPRINTER_HPP

#include <string>

class INewPrinter
{
public:
    virtual void print(const std::string& text) = 0;
    virtual ~INewPrinter() = default;
};

#endif // INEWPRINTER_HPP
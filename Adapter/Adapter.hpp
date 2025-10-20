#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "INewPrinter.hpp"
#include "OldPrinter.hpp"

class PrinterAdapter : public INewPrinter
{
public:
    PrinterAdapter(OldPrinter* printer);
    void print(const std::string& text) override;
private:
    OldPrinter* oldPrinter;
};

#include "Adapter.cpp"

#endif // ADAPTER_HPP
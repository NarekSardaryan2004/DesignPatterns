#include "Adapter.hpp"

PrinterAdapter::PrinterAdapter(OldPrinter* printer)
    : oldPrinter(printer) {}

void PrinterAdapter::print(const std::string& text)
{
    oldPrinter->printText(text);
}
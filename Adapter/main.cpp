#include "INewPrinter.hpp"
#include "OldPrinter.hpp"
#include "Adapter.hpp"

int main()
{
    OldPrinter oldPrinter;
    PrinterAdapter adapter(&oldPrinter);

    adapter.print("Hello through Adapter!");

    return 0;
}
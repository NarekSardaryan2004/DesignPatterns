#include "application.hpp"
#include "windows_factory.hpp"
#include "mac_factory.hpp"

int main()
{
    GUIFactory* factory = nullptr;

    bool isWindows = true;

    if (isWindows)
        factory = new WindowsFactory();
    else
        factory = new MacFactory();

    Application app(factory);
    app.createUI();
    app.paint();

    delete factory;

    return 0;
}
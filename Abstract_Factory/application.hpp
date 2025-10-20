#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "gui_factory.hpp"
#include <iostream>

class Application {
    GUIFactory* factory;
    Button* button;
    Checkbox* checkbox;
public:
    Application(GUIFactory* f)
        : factory(f), button(nullptr), checkbox(nullptr) {}

    ~Application() {
        delete button;
        delete checkbox;
    }

    void createUI() {
        button = factory->createButton();
        checkbox = factory->createCheckbox();
    }

    void paint() const {
        std::cout << button->paint() << std::endl;
        std::cout << checkbox->paint() << std::endl;
    }
};

#endif // APPLICATION_HPP
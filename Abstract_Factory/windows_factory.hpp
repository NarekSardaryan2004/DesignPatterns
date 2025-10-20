#ifndef WINDOWS_FACTORY_HPP
#define WINDOWS_FACTORY_HPP

#include "gui_factory.hpp"
#include "windows_button.hpp"
#include "windows_checkbox.hpp"

class WindowsFactory : public GUIFactory {
public:
    Button* createButton() const override {
        return new WindowsButton();
    }

    Checkbox* createCheckbox() const override {
        return new WindowsCheckbox();
    }
};

#endif // WINDOWS_FACTORY_HPP
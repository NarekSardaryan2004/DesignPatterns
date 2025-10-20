#ifndef MAC_FACTORY_HPP
#define MAC_FACTORY_HPP

#include "gui_factory.hpp"
#include "mac_button.hpp"
#include "mac_checkbox.hpp"

class MacFactory : public GUIFactory {
public:
    Button* createButton() const override {
        return new MacButton();
    }

    Checkbox* createCheckbox() const override {
        return new MacCheckbox();
    }
};

#endif // MAC_FACTORY_HPP
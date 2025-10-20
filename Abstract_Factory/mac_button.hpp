#ifndef MAC_BUTTON_HPP
#define MAC_BUTTON_HPP

#include "button.hpp"

class MacButton : public Button {
public:
    std::string paint() const override {
        return "Render a button in macOS style.";
    }
};

#endif // MAC_BUTTON_HPP
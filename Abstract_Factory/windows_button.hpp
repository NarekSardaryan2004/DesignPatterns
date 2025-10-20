#ifndef WINDOWS_BUTTON_HPP
#define WINDOWS_BUTTON_HPP

#include "button.hpp"

class WindowsButton : public Button {
public:
    std::string paint() const override {
        return "Render a button in Windows style.";
    }
};

#endif // WINDOWS_BUTTON_HPP
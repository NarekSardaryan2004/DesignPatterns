#ifndef WINDOWS_CHECKBOX_HPP
#define WINDOWS_CHECKBOX_HPP

#include "checkbox.hpp"

class WindowsCheckbox : public Checkbox {
public:
    std::string paint() const override {
        return "Render a checkbox in Windows style.";
    }
};

#endif // WINDOWS_CHECKBOX_HPP
#ifndef MAC_CHECKBOX_HPP
#define MAC_CHECKBOX_HPP

#include "checkbox.hpp"

class MacCheckbox : public Checkbox {
public:
    std::string paint() const override {
        return "Render a checkbox in macOS style.";
    }
};

#endif // MAC_CHECKBOX_HPP
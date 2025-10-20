#ifndef GUI_FACTORY_HPP
#define GUI_FACTORY_HPP

#include "button.hpp"
#include "checkbox.hpp"

class GUIFactory {
public:
    virtual ~GUIFactory() = default;
    virtual Button* createButton() const = 0;
    virtual Checkbox* createCheckbox() const = 0;
};

#endif // GUI_FACTORY_HPP
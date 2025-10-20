#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <string>

class Button {
public:
    virtual ~Button() = default;
    virtual std::string paint() const = 0;
};

#endif // BUTTON_HPP
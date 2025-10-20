#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#include <string>

class Checkbox {
public:
    virtual ~Checkbox() = default;
    virtual std::string paint() const = 0;
};

#endif // CHECKBOX_HPP
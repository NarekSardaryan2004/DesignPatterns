#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP

#include <memory>

struct Prototype
{
    virtual ~Prototype() = default;
    virtual std::unique_ptr<Prototype> clone() const = 0;
    virtual void print() const = 0;
};

#endif // PROTOTYPE_HPP
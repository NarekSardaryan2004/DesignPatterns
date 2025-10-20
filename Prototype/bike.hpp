#ifndef BIKE_HPP
#define BIKE_HPP

#include "prototype.hpp"
#include <string>

class Bike : public Prototype
{
public:
    Bike(const std::string& type, bool hasMotor);
    std::unique_ptr<Prototype> clone() const override;
    void print() const override;
    void setType(const std::string& newType);
    void setHasMotor(bool motor);

private:
    std::string type;
    bool hasMotor;
};

#endif // BIKE_HPP
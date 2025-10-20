#include "bike.hpp"
#include <iostream>

Bike::Bike(const std::string& type, bool hasMotor) 
    : type(type), hasMotor(hasMotor) {}

std::unique_ptr<Prototype> Bike::clone() const
{
    return std::make_unique<Bike>(*this);
}

void Bike::print() const
{
    std::cout << "Bike: " << type << ", Has Motor: " << (hasMotor ? "Yes" : "No") << "\n";
}

void Bike::setType(const std::string& newType)
{
    type = newType;
}

void Bike::setHasMotor(bool motor)
{
    hasMotor = motor;
}
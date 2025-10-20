#include "car.hpp"
#include <iostream>

Car::Car(const std::string& brand, int year) 
    : brand(brand), year(year) {}

std::unique_ptr<Prototype> Car::clone() const
{
    return std::make_unique<Car>(*this);
}

void Car::print() const
{
    std::cout << "Car: " << brand << ", Year: " << year << "\n";
}

void Car::setBrand(const std::string& newBrand)
{
    brand = newBrand;
}

void Car::setYear(int newYear)
{
    year = newYear;
}
#ifndef CAR_HPP
#define CAR_HPP

#include "prototype.hpp"
#include <string>

class Car : public Prototype
{
public:
    Car(const std::string& brand, int year);
    std::unique_ptr<Prototype> clone() const override;
    void print() const override;
    void setBrand(const std::string& newBrand);
    void setYear(int newYear);

private:
    std::string brand;
    int year;
};

#endif // CAR_HPP
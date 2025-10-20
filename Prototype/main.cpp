#include "car.hpp"
#include "bike.hpp"

#include <memory>

int main()
{
    std::unique_ptr<Prototype> carPrototype = std::make_unique<Car>("Toyota", 2020);
    std::unique_ptr<Prototype> bikePrototype = std::make_unique<Bike>("Mountain", false);

    std::unique_ptr<Prototype> carClone = carPrototype->clone();
    carClone->print();

    std::unique_ptr<Prototype> bikeClone = bikePrototype->clone();
    bikeClone->print();

    Car* clonedCar = dynamic_cast<Car*>(carClone.get());
    if (clonedCar) {
        clonedCar->setBrand("Honda");
        clonedCar->setYear(2023);
        clonedCar->print();
    }

    carPrototype->print();

    return 0;
}
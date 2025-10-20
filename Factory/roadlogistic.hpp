#ifndef ROADLOGISTICS_HPP
#define ROADLOGISTICS_HPP

#include "logistics.hpp"
#include "car.hpp"

class RoadLogistics : public Logistics {
public:
    Transport* createTransport() const override {
        return new Car();
    }
};

#endif // ROADLOGISTICS_HPP

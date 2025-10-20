#ifndef SEALOGISTICS_HPP
#define SEALOGISTICS_HPP

#include "logistics.hpp"
#include "ship.hpp"

class SeaLogistics : public Logistics {
public:
    Transport* createTransport() const override {
        return new Ship();
    }
};

#endif // SEALOGISTICS_HPP

#ifndef SHIP_HPP
#define SHIP_HPP

#include "transport.hpp"

class Ship : public Transport {
public:
    std::string deliver() const override {
        return "Deliver by sea in a container.";
    }
};

#endif // SHIP_HPP
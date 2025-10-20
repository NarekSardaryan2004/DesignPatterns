#ifndef CAR_HPP
#define CAR_HPP

#include "transport.hpp"

class Car : public Transport {
public:
    std::string deliver() const override {
        return "Deliver by road in a box.";
    }
};

#endif // CAR_HPP
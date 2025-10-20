#ifndef LOGISTICS_HPP
#define LOGISTICS_HPP

#include "transport.hpp"

class Logistics {
public:
    virtual ~Logistics() = default;

    virtual Transport* createTransport() const = 0;

    std::string planDelivery() const {
        Transport* t = createTransport();
        std::string result = "Logistics: " + t->deliver();
        delete t;
        return result;
    }
};

#endif // LOGISTICS_HPP

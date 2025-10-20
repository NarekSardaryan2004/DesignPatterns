#ifndef TRANSPORT_HPP
#define TRANSPORT_HPP

#include <string>

class Transport {
public:
    virtual ~Transport() = default;
    virtual std::string deliver() const = 0;
};

#endif // TRANSPORT_HPP
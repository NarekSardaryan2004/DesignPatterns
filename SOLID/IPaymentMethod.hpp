#ifndef IPAYMENTMETHOD_HPP
#define IPAYMENTMETHOD_HPP

#include <string>

class IPaymentMethod
{
public:
    virtual void pay(double amount) = 0;
    virtual ~IPaymentMethod() = default;
};

#endif // IPAYMENTMETHOD_HPP
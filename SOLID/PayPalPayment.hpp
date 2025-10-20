#ifndef PAYPALPAYMENT_HPP
#define PAYPALPAYMENT_HPP

#include "IPaymentMethod.hpp"

#include <iostream>

class PayPalPayment : public IPaymentMethod
{
public:
    void pay(double amount) override;
};

#endif // PAYPALPAYMENT_HPP
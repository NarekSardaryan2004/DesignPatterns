#ifndef CREDITCARDPAYMENT_HPP
#define CREDITCARDPAYMENT_HPP

#include "IPaymentMethod.hpp"

#include <iostream>

class CreditCardPayment : public IPaymentMethod
{
public:
    void pay(double amount) override;
};

#endif // CREDITCARDPAYMENT_HPP
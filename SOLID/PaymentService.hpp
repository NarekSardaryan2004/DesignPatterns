#ifndef PAYMENTSERVICE_HPP
#define PAYMENTSERVICE_HPP

#include "IPaymentMethod.hpp"
#include "PaymentRepository.hpp"
#include "ReceiptSender.hpp"

class PaymentService
{
public:
    PaymentService(IPaymentMethod* method);
    void checkout(double amount);
private:
    IPaymentMethod* paymentMethod;
    PaymentRepository repository;
    ReceiptSender sender;
};

#endif // PAYMENTSERVICE_HPP
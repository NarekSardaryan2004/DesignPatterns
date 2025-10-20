#include "PaymentService.hpp"

PaymentService::PaymentService(IPaymentMethod *method)
    :  paymentMethod(method) {}

void PaymentService::checkout(double amount)
{
    paymentMethod->pay(amount);
    repository.savePayment(amount);
    sender.sendReceipt("Payment completed successfully.");
}

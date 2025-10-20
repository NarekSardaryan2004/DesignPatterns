#include "CreditCardPayment.hpp"
#include "PayPalPayment.hpp"
#include "PaymentService.hpp"

int main()
{
    CreditCardPayment cardPayment;
    PayPalPayment paypalPayment;

    PaymentService service1(&cardPayment);
    service1.checkout(250.0);

    std::cout << "------------------------\n";

    PaymentService service2(&paypalPayment);
    service2.checkout(100.0);

    return 0;
}
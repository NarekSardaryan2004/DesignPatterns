#include "Observer.hpp"

#include <iostream>

class PhoneDisplay : public Observer
{
public:
    void update(float t) override {
        std::cout << "[Phone] New Temperature: " << t << "\n";
    }
};
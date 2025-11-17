#include <iostream>

#include "Device.hpp"

class TV : public Device
{
    int volume = 10;

public:
    void turnOn() override {
        std::cout << "TV ON\n";
    }

    void turnOff() override {
        std::cout << "TV OFF\n";
    }

    void setVolume(int v) override {
        volume = v;
        std::cout << "TV Volume: " << volume << "\n";
    }

    int getVolume() const override {
        return volume;
    }
};
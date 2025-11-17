#include <iostream>

#include "Device.hpp"

class Radio : public Device
{
    int volume = 5;

public:
    void turnOn() override {
        std::cout << "Radio ON\n";
    }

    void turnOff() override {
        std::cout << "Radio OFF\n";
    }

    void setVolume(int v) override {
        volume = v;
        std::cout << "Radio Volume: " << volume << "\n";
    }

    int getVolume() const override {
        return volume;
    }
};
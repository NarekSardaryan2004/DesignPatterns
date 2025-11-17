#include <iostream>

#include "Remote.hpp"

class BasicRemote : public Remote
{
public:
    BasicRemote(Device* d) : Remote(d) {}

    void togglePower() override {
        std::cout << "[Basic Remote] Power toggle\n";
        device->turnOn();
    }

    void volumeUp() override {
        device->setVolume(device->getVolume() + 1);
    }

    void volumeDown() override {
        device->setVolume(device->getVolume() - 1);
    }

    void mute() override {
        std::cout << "[Basic Remote] MUTE\n";
        device->setVolume(0);
    }
};
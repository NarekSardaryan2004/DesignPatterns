#include <iostream>

#include "Remote.hpp"

class AdvanceRemote : public Remote
{
public:
    AdvanceRemote(Device* d) : Remote(d) {}

    void togglePower() override {
        std::cout << "[Advance Remote] Power toggle\n";
        device->turnOn();
    }

    void volumeUp() override {
        device->setVolume(device->getVolume() + 5);
    }

    void volumeDown() override {
        device->setVolume(device->getVolume() - 5);
    }

    void mute() override {
        std::cout << "[Advanced Remote] MUTE\n";
        device->setVolume(0);
    }
};
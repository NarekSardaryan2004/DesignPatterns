#ifndef REMOTE_HPP
#define REMOTE_HPP

#include "Device.hpp"

class Remote
{
public:
    Remote(Device* d) : device(d) {}

    virtual void togglePower() = 0;
    virtual void volumeUp() = 0;
    virtual void volumeDown() = 0;
    virtual void mute() = 0;

    virtual ~Remote() = default;

protected:
    Device* device;
};

#endif // REMOTE_HPP
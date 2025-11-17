#ifndef DEVICE_HPP
#define DEVICE_HPP

class Device
{
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void setVolume(int v) = 0;
    virtual int getVolume() const = 0;

    virtual ~Device() = default;
};

#endif // DEVICE_HPP
#include "Subject.hpp"

#include <iostream>

class WeatherStation : public Subject
{
public:
    void setTemperature(float t) {
        temperature = t;
        notify(t);
    }

    float getTemperature() const {
        return temperature;
    }
private:
    float temperature;
};
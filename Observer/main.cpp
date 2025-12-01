#include "WeatherStation.cpp"
#include "PhoneDisplay.cpp"
#include "WindowDisplay.cpp"

int main()
{
    WeatherStation station;

    PhoneDisplay phone;
    WindowDisplay window;

    station.attach(&phone);
    station.attach(&window);

    station.setTemperature(22.5f);
    station.setTemperature(24.0f);

    return 0;
}

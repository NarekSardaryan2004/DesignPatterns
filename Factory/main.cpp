#include <iostream>

#include "roadlogistic.hpp"
#include "sealogistic.hpp"

int main()
{
    Logistics* road = new RoadLogistics();
    std::cout << road->planDelivery() << std::endl;

    Logistics* sea = new SeaLogistics();
    std::cout << sea->planDelivery() << std::endl;

    delete road;
    delete sea;
    
    return 0;
}
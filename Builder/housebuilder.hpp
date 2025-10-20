#ifndef HOUSEBUILDER_HPP
#define HOUSEBUILDER_HPP

#include "house.hpp"

class HouseBuilder
{
public:
    virtual ~HouseBuilder() = default;
    
    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildDoor() = 0;
    virtual void buildWindows() = 0;

    virtual House* getHouse() = 0;
};

#endif // HOUSEBUILDER_HPP
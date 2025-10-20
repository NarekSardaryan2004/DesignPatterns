#ifndef WOODENHOUSEBUILDER_HPP
#define WOODENHOUSEBUILDER_HPP

#include "housebuilder.hpp"

class WoodenHouseBuilder : public HouseBuilder
{
public:
    WoodenHouseBuilder();
    ~WoodenHouseBuilder();

    void buildWalls() override;
    void buildRoof() override;
    void buildDoor() override;
    void buildWindows() override;
    
    House* getHouse() override;
private:
    House* house;
};

#endif // WOODENHOUSEBUILDER_HPP
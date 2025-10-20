#ifndef STONEHOUSEBUILDER_HPP
#define STONEHOUSEBUILDER_HPP

#include "housebuilder.hpp"

class StoneHouseBuilder : public HouseBuilder
{
public:
    StoneHouseBuilder();
    ~StoneHouseBuilder();

    void buildWalls() override;
    void buildRoof() override;
    void buildDoor() override;
    void buildWindows() override;

    House* getHouse() override;
private:
    House* house;
};

#endif // STONEHOUSEBUILDER_HPP
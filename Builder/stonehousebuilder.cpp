#include "stonehousebuilder.hpp"

StoneHouseBuilder::StoneHouseBuilder()
{
    house = new House();
}

StoneHouseBuilder::~StoneHouseBuilder()
{
    delete house;
}

void StoneHouseBuilder::buildWalls()
{
    house->walls = "Stone Walls";
}

void StoneHouseBuilder::buildRoof()
{
    house->roof = "Stone Roof";
}

void StoneHouseBuilder::buildDoor()
{
    house->door = "Iron Door";
}

void StoneHouseBuilder::buildWindows()
{
    house->windows = "Steel Windows";
}

House* StoneHouseBuilder::getHouse()
{
    return house;
}
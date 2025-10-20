#include "woodenhousebuilder.hpp"

WoodenHouseBuilder::WoodenHouseBuilder()
{
    house = new House();
}

WoodenHouseBuilder::~WoodenHouseBuilder()
{
    delete house;
}

void WoodenHouseBuilder::buildWalls()
{
    house->walls = "Wooden Walls";
}

void WoodenHouseBuilder::buildRoof()
{
    house->roof = "Wooden Roof";
}

void WoodenHouseBuilder::buildDoor()
{
    house->door = "Wooden Door";
}

void WoodenHouseBuilder::buildWindows()
{
    house->windows = "Glass Windows";
}

House* WoodenHouseBuilder::getHouse()
{
    return house;
}
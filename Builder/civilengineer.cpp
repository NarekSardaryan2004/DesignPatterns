#include "civilengineer.hpp"

CivilEngineer::CivilEngineer(HouseBuilder* b) : builder(b) {}

House* CivilEngineer::constructHouse()
{
    builder->buildWalls();
    builder->buildRoof();
    builder->buildDoor();
    builder->buildWindows();

    return builder->getHouse();
}
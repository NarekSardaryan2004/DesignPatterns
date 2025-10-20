#include "woodenhousebuilder.hpp"
#include "stonehousebuilder.hpp"
#include "civilengineer.hpp"

int main()
{
    WoodenHouseBuilder woodenBuilder;
    CivilEngineer engineer1(&woodenBuilder);
    House* woodenHouse = engineer1.constructHouse();
    woodenHouse->showHouse();

    StoneHouseBuilder stoneBuilder;
    CivilEngineer engineer2(&stoneBuilder);
    House* stoneHouse = engineer2.constructHouse();
    stoneHouse->showHouse();

    return 0;
}
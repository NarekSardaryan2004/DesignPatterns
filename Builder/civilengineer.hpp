#ifndef CIVILENGINEER_HPP
#define CIVILENGINEER_HPP

#include "housebuilder.hpp"

class CivilEngineer
{
public:
    CivilEngineer(HouseBuilder* b);
    House* constructHouse();
private:
    HouseBuilder* builder;
};

#endif // CIVILENGINEER_HPP
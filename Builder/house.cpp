#include "house.hpp"
#include <iostream>

void House::showHouse() const
{
    std::cout << "House with "
                << walls << ", "
                << roof << ", "
                << door << ", "
                << windows << "\n";
}
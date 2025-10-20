#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>

class House
{
public:
    std::string walls;
    std::string roof;
    std::string door;
    std::string windows;

    void showHouse() const;
};

#endif // HOUSE_HPP
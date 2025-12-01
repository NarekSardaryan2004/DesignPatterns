#include "Observer.hpp"

#include <iostream>

class WindowDisplay : public Observer
{
public:
    void update(float t) override {
        std::cout << "[Window] Temperature changed: " << t << "\n";
    }
};
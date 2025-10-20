#include <iostream>

#include "input_manager.hpp"

int main()
{
    InputManager& input  = InputManager::getInstance();

    input.pressKey(87);

    if (input.isKeyPressed(87)) {
        std::cout << "Player moves forward!\n";
    }

    input.releaseKey(87);

    input.setMousePos(100, 200);
    input.pressMouseButton(0);

    std::cout << "Mouse X: " << input.getMouseX()
              << ", Y: " << input.getMouseY() << "\n";

    if (input.isMouseButtonPressed(0)) {
        std::cout << "Left mouse button pressed!\n";
    }

    return 0;
}
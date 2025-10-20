#include "input_manager.hpp"

InputManager::InputManager() : mouseX(0), mouseY(0) {
    mouseButtons[0] = mouseButtons[1] = mouseButtons[2] = false;
}

InputManager& InputManager::getInstance() {
    static InputManager instance;

    return instance;
}

void InputManager::pressKey(int key) {
    keyState[key] = true;
}

void InputManager::releaseKey(int key) {
    keyState[key] = false;
}

bool InputManager::isKeyPressed(int key) const {
    auto it = keyState.find(key);

    return it != keyState.end() && it->second;
}

void InputManager::pressMouseButton(int button) {
    if (button >= 0 && button < 3) {
        mouseButtons[button] = true;
    }
}

void InputManager::releaseMouseButton(int button) {
    if (button >= 0 && button < 3) {
        mouseButtons[button] = false;
    }
}

bool InputManager::isMouseButtonPressed(int button) const {
    return (button >= 0 && button < 3) ? mouseButtons[button] : false;
}

void InputManager::setMousePos(int x, int y) {
    mouseX = x;
    mouseY = y;
}

int InputManager::getMouseX() const {
    return mouseX;
}

int InputManager::getMouseY() const {
    return mouseY;
}
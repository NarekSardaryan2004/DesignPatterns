#ifndef INPUT_MANAGER_HPP
#define INPUT_MANAGER_HPP

#include <unordered_map>

class InputManager
{
public:
    static InputManager& getInstance();

    void pressKey(int key);
    void releaseKey(int key);
    bool isKeyPressed(int key) const;

    void pressMouseButton(int button);
    void releaseMouseButton(int button);
    bool isMouseButtonPressed(int button) const;

    void setMousePos(int x, int y);
    int getMouseX() const;
    int getMouseY() const;

private:
    InputManager();
    InputManager(const InputManager&) = delete;
    InputManager& operator=(const InputManager&) = delete;

    int mouseX, mouseY;
    bool mouseButtons[3];
    std::unordered_map<int, bool> keyState;
};

#endif // INPUT_MANAGER_HPP
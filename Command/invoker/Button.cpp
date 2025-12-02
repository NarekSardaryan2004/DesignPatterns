#include "Button.hpp"

Button::Button(Command* command) : m_p_command(command) {}

void Button::press()
{
    if (m_p_command) {
        m_p_command->execute();
    }
}
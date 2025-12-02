#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "../command/Command.hpp"

class Button
{
public:
    Button(Command* command);

    void press();
private:
    Command* m_p_command;
};

#endif // BUTTON_HPP
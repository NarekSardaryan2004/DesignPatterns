#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>

class Player;

class State
{
public:
    virtual ~State() = default;

    virtual void play(Player& player) = 0;
    virtual void pause(Player& player) = 0;
    virtual void stop(Player& player) = 0;
};
#endif // STATE_HPP
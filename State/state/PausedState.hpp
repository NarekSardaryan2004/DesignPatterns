#ifndef PAUSEDSTATE_HPP
#define PAUSEDSTATE_HPP

#include "State.hpp"

class PausedState : public State
{
public:
    void play(Player& player) override;
    void pause(Player& player) override;
    void stop(Player& player) override;
};

#endif // PAUSEDSTATE_HPP
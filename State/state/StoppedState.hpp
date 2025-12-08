#ifndef StOPPEDSTATE_HPP
#define STOPPEDSTATE_HPP

#include "State.hpp"

class StoppedState : public State
{
public:
    void play(Player& player) override;
    void pause(Player& player) override;
    void stop(Player& player) override;
};

#endif // STOPPEDSTATE_HPP
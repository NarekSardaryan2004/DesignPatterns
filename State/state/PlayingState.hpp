#ifndef PLAYINGSTATE_HPP
#define PLAYINGSTATE_HPP

#include "State.hpp"

class PlayingState : public State
{
public:
    void play(Player& player) override;
    void pause(Player& player) override;
    void stop(Player& player) override;
};

#endif // PLAYINGSTATE_HPP
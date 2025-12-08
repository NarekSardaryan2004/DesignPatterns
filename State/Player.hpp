#ifndef PlaYER_HPP
#define PLAYER_HPP

#include "state/State.hpp"

class Player
{
public:
    Player(State* initState);
    ~Player();

    void setState(State* newState);
    void play();
    void pause();
    void stop();

private:
    State* state_;
};

#endif // PLAYER_HPP
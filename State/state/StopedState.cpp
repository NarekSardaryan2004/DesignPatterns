#include "StoppedState.hpp"
#include "../Player.hpp"
#include "PlayingState.hpp"

void StoppedState::play(Player& player)
{
    std::cout << "[Stopped] Starting from beginning...\n";
    player.setState(new PlayingState());
}

void StoppedState::pause(Player&)
{
    std::cout << "[Stopped] Can't pause — nothing is playing\n";
}

void StoppedState::stop(Player&)
{
    std::cout << "[Stopped] Already stopped\n";
}

#include "PausedState.hpp"
#include "../Player.hpp"
#include "PlayingState.hpp"
#include "StoppedState.hpp"

void PausedState::play(Player& player)
{
    std::cout << "[Paused] Resuming...\n";
    player.setState(new PlayingState());
}

void PausedState::pause(Player&)
{
    std::cout << "[Paused] Already paused\n";
}

void PausedState::stop(Player& player)
{
    std::cout << "[Paused] Stopping...\n";
    player.setState(new StoppedState());
}
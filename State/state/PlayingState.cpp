#include "PlayingState.hpp"
#include "PausedState.hpp"
#include "StoppedState.hpp"
#include "../Player.hpp"

void PlayingState::play(Player&)
{
    std::cout << "[Playing] Already playing\n";
}

void PlayingState::pause(Player& player)
{
    std::cout << "[Playing] Pausing...\n";
    player.setState(new PausedState());
}

void PlayingState::stop(Player& player)
{
    std::cout << "[Playing] Stopping...\n";
    player.setState(new StoppedState());
}
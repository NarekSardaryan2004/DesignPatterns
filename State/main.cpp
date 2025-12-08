#include "Player.hpp"
#include "state/StoppedState.hpp"

int main()
{
    Player player(new StoppedState());

    player.play();
    player.pause();
    player.play();
    player.stop();
    player.stop();
}
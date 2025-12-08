#include "Player.hpp"

Player::Player(State* initState)
    : state_(initState) {}

Player::~Player()
{
    delete state_;
}

void Player::setState(State* newState)
{
    delete state_;
    state_ = newState;
}

void Player::play()
{
    state_->play(*this);
}

void Player::pause()
{
    state_->pause(*this);
}

void Player::stop()
{
    state_->stop(*this);
}
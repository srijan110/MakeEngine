#pragma once
#include "rect.hpp"
#include "types.hpp"
#include "event.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
private:
    Rect rect;
    KeyMap Up;
    KeyMap Down;
    KeyMap Left; 
    KeyMap Right;
    double Speed; 
public:
    Player(Rect rect, KeyMap UP, KeyMap DOWN, KeyMap LEFT, KeyMap RIGHT, double Speed);
    int SetSpeed(double value);
    int Update(Event event);
    Rect GetRect();
};

#endif
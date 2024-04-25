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
public:
    Player(Rect rect, KeyMap UP, KeyMap DOWN, KeyMap LEFT, KeyMap RIGHT);
    int Update(Event event);
    Rect GetRect();
};

#endif
#pragma once
#include "types.hpp"

#ifndef RECT_HPP
#define RECT_HPP

class Rect
{
private:
    SDL_Rect rect;
public:
    Rect(Coordinate Position, Coordinate Size);
    int DrawRect(Surface surface, Color color);
    bool IsRectColliding(Rect RectA);
    int MoveRect(Coordinate coordinate);
    int GoToRect(Coordinate coordinate);
    SDL_Rect GetRect();
};

#endif
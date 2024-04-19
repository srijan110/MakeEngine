#include <SDL2/SDL.h>
#include "MakeEngine\types.hpp"

int DrawRect(Rect rect, Surface surface, Color color)
{
    SDL_FillRect(surface, &rect, SDL_MapRGB(surface -> format, color.Red, color.Green, color.Blue));
}

bool IsColliding(Rect RectA, Rect RectB)
{
    if(SDL_HasIntersection(&RectA, &RectB)) return true;
    else return false;
}

Rect MoveRect(Rect rect, Coordinate coordinate)
{
    rect.x += coordinate.x;
    rect.y += coordinate.y;
    return rect;
}

Rect GoToRect(Rect rect, Coordinate coordinate)
{
    rect.x = coordinate.x;
    rect.y = coordinate.y;
    return rect;
}
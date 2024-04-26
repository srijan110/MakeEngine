#include <SDL2/SDL.h>
#include "MakeEngine\types.hpp"
#include "MakeEngine\rect.hpp"

Rect::Rect(Coordinate Position, Coordinate Size)
{
    rect = {Position.x, Position.y, Size.x, Size.y};
}

int Rect::DrawRect(Surface surface, Color color)
{
    SDL_Rect result = {rect.x, rect.y, rect.w, rect.h};
    SDL_FillRect(surface, &rect, SDL_MapRGB(surface -> format, color.Red, color.Green, color.Blue));
}

bool Rect::IsRectColliding(Rect RectA)
{
    SDL_Rect rect_a = RectA.GetRect();
    if(SDL_HasIntersection(&rect_a, &rect)) return true;
    else return false;
}

int Rect::MoveRect(Coordinate coordinate)
{
    rect.x += coordinate.x;
    rect.y += coordinate.y;
    return 0;
}

int Rect::GoToRect(Coordinate coordinate)
{
    rect.x = coordinate.x;
    rect.y = coordinate.y;
    return 0;
}

SDL_Rect Rect::GetRect()
{
    return rect;
}
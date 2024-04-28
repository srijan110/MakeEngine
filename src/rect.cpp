#include <SDL2/SDL.h>
#include "MakeEngine\types.hpp"
#include "MakeEngine\rect.hpp"

Rect::Rect(Coordinate Position, Coordinate Size)
{
    rect = {Position.x, Position.y, Size.x, Size.y};
}

int Rect::DrawRect(Surface surface, Color color)
{
    SDL_SetRenderDrawColor(surface, color.Red, color.Blue, color.Green, color.Alpha);
    SDL_RenderDrawRect(surface, &rect);

    return 0;
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
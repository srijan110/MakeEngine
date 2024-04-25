#include "MakeEngine\player.hpp"
#include "MakeEngine\event.hpp"

Player::Player(Rect RECT, KeyMap UP, KeyMap DOWN, KeyMap LEFT, KeyMap RIGHT) : rect(RECT)
{
    RECT = rect;
    Up = UP; 
    Down = DOWN; 
    Left = LEFT; 
    Right = RIGHT;
}

int Player::Update(Event event)
{
    if (Up != NONE) if (event.IsKeyPressing(Up)) rect.MoveRect({0, 1}); 
    if (Down != NONE) if (event.IsKeyPressing(Down)) rect.MoveRect({0, -1}); 
    if (Left != NONE) if (event.IsKeyPressing(Left)) rect.MoveRect({-1, 0}); 
    if (Right != NONE) if (event.IsKeyPressing(Right)) rect.MoveRect({1, 0}); 
}

Rect Player::GetRect() {return rect;}
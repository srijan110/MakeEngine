#include "MakeEngine\player.hpp"
#include "MakeEngine\event.hpp"

Player::Player(Rect RECT, KeyMap UP, KeyMap DOWN, KeyMap LEFT, KeyMap RIGHT, double SPEED) : rect(RECT)
{
    RECT = rect;
    Up = UP; 
    Down = DOWN; 
    Left = LEFT; 
    Right = RIGHT;
    Speed = SPEED;
}

int Player::Update(Event event)
{
    if (event.IsKeyPressing(Up)) rect.MoveRect({0, (int)(-Speed)});
    if (event.IsKeyPressing(Down)) rect.MoveRect({0, (int)(Speed)});
    if (event.IsKeyPressing(Left)) rect.MoveRect({(int)(-Speed), 0}); 
    if (event.IsKeyPressing(Right)) rect.MoveRect({(int)(Speed), 0}); 

    return 0;
}

Rect Player::GetRect() 
{
    return rect;
}

int Player::SetSpeed(double Value) 
{
    Speed = Value;
    return 0;
}
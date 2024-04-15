#pragma once
#include <SDL2/SDL.h>
#include "types.hpp"
#include "keyboard.hpp"

SDL_Event SDL_event;
bool IsPressed = false;
KeyMap key = NONE;

int UpdateEvent()
{
    SDL_PollEvent(&SDL_event);

    if (SDL_event.type == SDL_KEYDOWN && !IsPressed) 
    {
        key = KeyboardUpdate(SDL_event);
        IsPressed = true;
    }
    else if (SDL_event.type == SDL_KEYUP)
    {
        key = NONE;
        IsPressed = false;
    }

    return 0;
}

bool IsQuiting()
{
    if (SDL_event.type == SDL_QUIT) return true;
    else return false;
}

bool IsKeyPressing(KeyMap Key)
{
    if (key == Key) return true;
    else return false;
}

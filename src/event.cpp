#include <SDL2/SDL.h>
#include "MakeEngine\types.hpp"
#include "MakeEngine\keyboard.hpp"

SDL_Event SDL_event;
bool IsPressed;
KeyMap key;

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



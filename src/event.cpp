#include <SDL2/SDL.h>
#include "MakeEngine\types.hpp"
#include "MakeEngine\keyboard.hpp"

SDL_Event SDL_event;
bool IsPressed;
KeyMap key;

int Event::UpdateEvent()
{
    SDL_PollEvent(&SDL_event);

    if (SDL_event.type == SDL_KEYDOWN && !IsPressed) 
    {
        key = keyboard.KeyboardUpdate(SDL_event);
        IsPressed = true;
    }
    else if (SDL_event.type == SDL_KEYUP)
    {
        key = NONE;
        IsPressed = false;
    }

    return 0;
};

bool Event::IsQuiting()
{
    return SDL_event.type == SDL_QUIT;
}

bool Event::IsKeyPressing(KeyMap Key)
{
    return keyboard.IsKeyPressing(Key);
}
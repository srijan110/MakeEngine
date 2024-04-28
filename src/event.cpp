#include <SDL2/SDL.h>
#include <math.h>
#include <iostream>

#include "MakeEngine\keyboard.hpp" 
#include "MakeEngine\types.hpp"
#include "MakeEngine\event.hpp"

//bool IsPressed;
Keyboard keyboard;

int Event::UpdateEvent()
{
    SDL_PollEvent(&SDL_event);

    Delta = (SDL_GetTicks() - start) / 1000;

    //std::cout << SDL_GetTicks() << ' ' << start << std::endl;

    start = SDL_GetTicks();
    
    return 0;
};

bool Event::IsQuiting()
{
    return SDL_event.type == SDL_QUIT;
}

bool Event::IsKeyPressing(KeyMap Key)
{   
    if (SDL_event.type == SDL_KEYDOWN)
    {
        std::cout << keyboard.KeyboardUpdate(SDL_event) << std::endl;
        if (keyboard.KeyboardUpdate(SDL_event) == Key) return true;
        else false;
    }
}

int Event::SetFPS(short int FPS)
{
    int desiredDelta = 1000 / FPS;
    int delta = SDL_GetTicks() - start;
    if(delta < desiredDelta) SDL_Delay(desiredDelta - delta);
    start = SDL_GetTicks();

    return 0;
}
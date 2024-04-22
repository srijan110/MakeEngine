#pragma once
#include <SDL2/SDL.h>
#include "types.hpp"
#include "keyboard.hpp"

#ifndef EVENT_HPP
#define EVENT_HPP

class Event
{
private:
    Keyboard keyboard;
    SDL_Event SDL_event;
    bool IsPressed;
    KeyMap key;
public:
    int UpdateEvent();
    bool IsQuiting();
};

#endif
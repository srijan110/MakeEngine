#pragma once
#include <SDL2/SDL.h>
#include <iostream>

#include "types.hpp"
#include "event.hpp"

#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

class Keyboard
{
private:
    
public:
    KeyMap KeyboardUpdate(SDL_Event Event);
};

#endif
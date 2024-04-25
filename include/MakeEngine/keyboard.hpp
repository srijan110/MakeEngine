#pragma once
#include <SDL2/SDL.h>
#include "types.hpp"
#include "event.hpp"

#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

class Keyboard
{
private:
    KeyMap key;
public:
    KeyMap KeyboardUpdate(SDL_Event Event);
    bool IsKeyPressing(KeyMap Key);
};

#endif
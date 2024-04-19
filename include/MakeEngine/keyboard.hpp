#include <SDL2/SDL.h>
#include "types.hpp"
#include "event.hpp"

#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

KeyMap KeyboardUpdate(SDL_Event Event);

bool IsKeyPressing(KeyMap Key);

#endif
#pragma once
#include <SDL2/SDL.h>
#include "types.hpp"
#include "keyboard.hpp"

#ifndef EVENT_HPP
#define EVENT_HPP

extern KeyMap key;

int UpdateEvent();

bool IsQuiting();

#endif
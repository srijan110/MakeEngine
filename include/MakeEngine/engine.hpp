#pragma once
#include <SDL2/SDL.h>
#include "event.hpp"
#include "rect.hpp"
#include "types.hpp"

#ifndef ENGINE_HPP
#define ENGINE_HPP

extern SDL_Window *Window;
extern Surface WinSurf;

int Init();

Surface CreateWindow(const char * Title, int Width, int Height);

int Quit();

int UpdateWindow();

int ClearWindow(Color Fill_Color);

#endif


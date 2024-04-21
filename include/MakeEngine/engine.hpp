#pragma once
#include <SDL2/SDL.h>
#include <string>

#include "event.hpp"
#include "rect.hpp"
#include "types.hpp"

#ifndef ENGINE_HPP
#define ENGINE_HPP

class Engine {
    private:
        std::string Title;
        Coordinate Size;

        SDL_Window *Window;
        Surface WinSurf;

    public:
        Engine(std::string Title, Coordinate Size);
        ~Engine();

        int UpdateWindow();
        int ClearWindow(Color Fill_Color);

        Surface GetSurface();
};

#endif


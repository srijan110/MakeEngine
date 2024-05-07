#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_Image.h>
#include <string>

#include "event.hpp"
#include "rect.hpp"
#include "types.hpp"
#include "player.hpp"

#ifndef ENGINE_HPP
#define ENGINE_HPP

class Engine {
    private:
        std::string Title;
        Coordinate Size;

        SDL_Window *Window = nullptr;
        Surface WinSurf = nullptr;

    public:
        Engine(std::string Title, Coordinate Size);
        ~Engine();

        int UpdateWindow();
        int ClearWindow(Color Fill_Color);
        Surface GetSurface();
};

#endif


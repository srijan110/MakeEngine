#pragma once
#include <SDL2/SDL.h>
#include "event.hpp"
#include "rect.hpp"
#include "types.hpp"

SDL_Window *Window;
Surface WinSurf;

int Init(){
    SDL_Init(SDL_INIT_EVERYTHING);
    return 0;
}

Surface CreateWindow(const char * Title, int Width, int Height){
    Window = SDL_CreateWindow(Title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Width, Height, SDL_WINDOW_SHOWN);
    WinSurf = SDL_GetWindowSurface(Window);
    return WinSurf;
}

int Quit(){
    SDL_FreeSurface(WinSurf);
    SDL_DestroyWindow(Window);
    SDL_Quit();
    return 0;
}

int UpdateWindow(){
    SDL_UpdateWindowSurface(Window);
    return 0;
}

int ClearWindow(Color Fill_Color){
    SDL_FillRect(WinSurf, NULL, SDL_MapRGB(WinSurf -> format, Fill_Color.Red, Fill_Color.Green, Fill_Color.Blue));
    return 0;
}

int min()
{
    bool Running = true;
    SDL_Event e;

    while (Running){
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                Running = false;
            }
        }
        
    }
}



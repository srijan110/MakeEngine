#include "MakeEngine\engine.hpp"
#include <string>

Engine::Engine(std::string Title, Coordinate Size)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    Window = SDL_CreateWindow(Title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Size.x, Size.y, SDL_WINDOW_SHOWN);
    WinSurf = SDL_GetRenderer(Window);
}

Engine::~Engine(){
    SDL_DestroyRenderer(WinSurf);
    SDL_DestroyWindow(Window);
    SDL_Quit();
}

int Engine::UpdateWindow(){
    SDL_RenderPresent(WinSurf);
    return 0;
}

int Engine::ClearWindow(Color Fill_Color){
    SDL_SetRenderDrawColor(WinSurf, Fill_Color.Red, Fill_Color.Blue, Fill_Color.Green, Fill_Color.Alpha);
    SDL_RenderClear(WinSurf);
    return 0;
}

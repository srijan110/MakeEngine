#include "MakeEngine\engine.hpp"
#include <string>

Engine::Engine(std::string Title, Coordinate Size)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    IMG_Init(IMG_INIT_PNG);
    
    SDL_CreateWindowAndRenderer(Size.x, Size.y, 0, &Window, &WinSurf);
    SDL_SetWindowTitle(Window, Title.c_str());
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

Surface Engine::GetSurface()
{
    return WinSurf;
}

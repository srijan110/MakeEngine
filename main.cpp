#include "MakeEngine\engine.hpp"
#include "iostream"

int fps = 60;
int desiredDelta = fps; 

int WinMain()
{
    Init();
    Surface window = CreateWindow("Hello World!", 500, 500);

    Rect a = {10,10,20,20};
    bool running = true;
    int starttick, avgFPS;
    long double delta;

    while (running)
    {
        starttick = SDL_GetTicks();
        UpdateEvent();
        
        if (IsQuiting()) running = false;

        if (IsKeyPressing(A)) a = MoveRect(a, {0,10});
        
        DrawRect(a, window, {255, 0, 0});

        UpdateWindow();
        ClearWindow({255, 255, 255});
    }

    Quit();
    return 0;
}

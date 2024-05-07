#include "engine.hpp"
#include <iostream>
#include <SDL_Image.h>

class Image
{
private:
    SDL_Surface * image;

public:
    Image(std::string Path);
    ~Image();
    int Draw(SDL_Renderer * Renderer, Rect coords);
};



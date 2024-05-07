#include "MakeEngine\image.hpp"

Image::Image(std::string Path)
{
    image = IMG_Load(Path.c_str());
}

int Image::Draw(SDL_Renderer * Renderer, Rect coords)
{
    SDL_RenderCopy(Renderer, SDL_CreateTextureFromSurface(Renderer, image), NULL, (const SDL_Rect *) &coords);
    return 0;
}

Image::~Image()
{
    SDL_FreeSurface(image);
}
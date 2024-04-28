#pragma once
#include <SDL2/SDL.h>

typedef struct {
    unsigned short int Red;
    unsigned short int Green;
    unsigned short int Blue;
    unsigned short int Alpha;
} Color;

typedef struct {
    int x;
    int y;
} Coordinate;

typedef SDL_Renderer* Surface;

enum KeyMap
{
    A,B,C,D,
    E,F,G,H,
    I,J,K,L,
    M,N,O,P,
    Q,R,S,T,
    U,V,W,X,
    Y,Z,NONE,
    SPACE,TAB,
    LSHIFT,RSHIFT,
    LCTRL,RCTRL,
    RALT,LALT
};

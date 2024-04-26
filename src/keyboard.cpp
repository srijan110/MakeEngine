#include <SDL2/SDL.h>
#include "MakeEngine\types.hpp"
#include "MakeEngine\event.hpp"
#include "MakeEngine\keyboard.hpp"

KeyMap Keyboard::KeyboardUpdate(SDL_Event Event)
{
    switch (Event.key.keysym.sym) 
    {
        case SDLK_a: key =  A;
        case SDLK_b: key =  B;
        case SDLK_c: key =  C;
        case SDLK_d: key =  D;
        case SDLK_e: key =  E;
        case SDLK_f: key =  F;
        case SDLK_g: key =  G;
        case SDLK_h: key =  H;
        case SDLK_i: key =  I;
        case SDLK_j: key =  J;
        case SDLK_k: key =  K;
        case SDLK_l: key =  L;
        case SDLK_m: key =  M;
        case SDLK_n: key =  N;
        case SDLK_o: key =  O;
        case SDLK_p: key =  P;
        case SDLK_q: key =  Q;
        case SDLK_r: key =  R;
        case SDLK_s: key =  S;
        case SDLK_t: key =  T;
        case SDLK_u: key =  U;
        case SDLK_v: key =  V;
        case SDLK_w: key =  W;
        case SDLK_x: key =  X;
        case SDLK_y: key =  Y;
        case SDLK_z: key =  Z;
        case SDLK_SPACE: key =  SPACE;
        case SDLK_LSHIFT: key =  LSHIFT;
        case SDLK_RSHIFT: key =  RSHIFT;
        case SDLK_LCTRL: key =  LCTRL;
        case SDLK_RCTRL: key =  RCTRL;
        case SDLK_LALT: key =  LALT;
        case SDLK_RALT: key =  RALT;
        case SDLK_TAB: key =  TAB;
        default: key =  NONE;

        return key;
    }
}

bool Keyboard::IsKeyPressing(KeyMap Key)
{
    return key == Key;
}

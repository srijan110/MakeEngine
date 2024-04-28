#include <SDL2/SDL.h>
#include <iostream>

#include "MakeEngine\types.hpp"
#include "MakeEngine\event.hpp"
#include "MakeEngine\keyboard.hpp"

KeyMap Keyboard::KeyboardUpdate(SDL_Event Event)
{   
    switch (Event.key.keysym.sym) 
    {
        case SDLK_a: return A;
        case SDLK_b: return B;
        case SDLK_c: return C;
        case SDLK_d: return D;
        case SDLK_e: return E;
        case SDLK_f: return F;
        case SDLK_g: return G;
        case SDLK_h: return H;
        case SDLK_i: return I;
        case SDLK_j: return J;
        case SDLK_k: return K;
        case SDLK_l: return L;
        case SDLK_m: return M;
        case SDLK_n: return N;
        case SDLK_o: return O;
        case SDLK_p: return P;
        case SDLK_q: return Q;
        case SDLK_r: return R;
        case SDLK_s: return S;
        case SDLK_t: return T;
        case SDLK_u: return U;
        case SDLK_v: return V;
        case SDLK_w: return W;
        case SDLK_x: return X;
        case SDLK_y: return Y;
        case SDLK_z: return Z;
        case SDLK_SPACE: return SPACE;
        case SDLK_LSHIFT: return LSHIFT;
        case SDLK_RSHIFT: return RSHIFT;
        case SDLK_LCTRL: return LCTRL;
        case SDLK_RCTRL: return RCTRL;
        case SDLK_LALT: return LALT;
        case SDLK_RALT: return RALT;
        case SDLK_TAB: return TAB;
        default: return NONE;
    }
}
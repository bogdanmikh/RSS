#include <SDL.h>

class Player {
public:
    float x,y;
    SDL_Renderer *renderer;

    void draw();
};

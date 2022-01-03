//
// Created by Bogdan on 03.01.2022.
//

#include <SDL.h>

class Car {
public:
    float x, y;
    float speed;
    SDL_Renderer *renderer;
    bool horizontal;

    void draw();
};


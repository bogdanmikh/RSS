#include "Input.h"

bool Input::isKeyDown(char keyCode) {
    return keys[keyCode];
}

void Input::pollEvents() {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_KEYDOWN) {
            keys[event.key.keysym.sym] = true;
        }
        if (event.type == SDL_KEYUP) {
            keys[event.key.keysym.sym] = false;
            if (event.key.keysym.sym == SDLK_ESCAPE) {
                quit = true;
            }
        }
        if (event.type == SDL_QUIT) {
            quit = true;
        }
    }
}

bool Input::shouldClose() {
    return quit;
}

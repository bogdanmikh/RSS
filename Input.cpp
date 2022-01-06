#include "Input.h"

bool Input::isKeyDown(char keyCode) {
    return keys[keyCode];
}

bool Input::isKeyJustDown(char keyCode) {
    return keys[keyCode] && keysFrames[keyCode] == frame;
}

void Input::pollEvents() {
    frame++;
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_KEYDOWN) {
            keys[event.key.keysym.sym] = true;
            keysFrames[event.key.keysym.sym] = frame;
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

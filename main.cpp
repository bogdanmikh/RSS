#include <iostream>
#include <SDL.h>

#include "Logger.h"
#include "Player.h"
#include "Car.h"
#include "Input.h"

#define SCREEN_WIDTH    800
#define SCREEN_HEIGHT   600

int main(int argc, char *argv[]) {
    Logger logger;
    logger.logAbout();
    bool tp = false;

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        print("error initializing SDL: ");
        print(SDL_GetError());
        newLine;
        return -1;
    }

    SDL_Window *window = SDL_CreateWindow("RSS",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH, SCREEN_HEIGHT,
                                          SDL_WINDOW_SHOWN
    );

    if (!window) {
        print("Window could not be created!: ");
        print(SDL_GetError());
        newLine;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        print("Renderer could not be created!: ");
        print(SDL_GetError());
        newLine;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    Car car;
    car.renderer = renderer;
    car.x = 100;
    car.y = 100;

    Player jack;
    jack.x = 200;
    jack.y = 200;

    Input input;
    input.quit = false;
    memset(input.keys, false, 1024);
    while (input.shouldClose() == false) {
        input.pollEvents();

        if (input.isKeyDown(SDLK_d)) {
            car.horizontal = true;
            car.x += 0.050f;
        }
        if (input.isKeyDown(SDLK_a)) {
            car.horizontal = true;
            car.x -= 0.050f;
        }
        if (input.isKeyDown(SDLK_w)) {
            car.horizontal = false;
            car.y -= 0.050f;
        }
        if (input.isKeyDown(SDLK_s)) {
            car.horizontal = false;
            car.y += 0.050f;
        }

        if (input.isKeyDown(SDLK_d)) {
            jack.x += 0.01f;
        }
        if (input.isKeyDown(SDLK_a)) {
            jack.x -= 0.01f;
        }
        if (input.isKeyDown(SDLK_w)) {
            car.horizontal = false;
            jack.y -= 0.01f;
        }
        if (input.isKeyDown(SDLK_s)) {
            jack.y += 0.01f;
        }

        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderClear(renderer);

        car.draw();
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}

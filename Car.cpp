#include "Car.h"

void Car::draw() {
    if (horizontal) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect = {(int) (x + 55), (int) (y - 9), 20, 48};
        SDL_RenderFillRect(renderer, &rect);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect2 = { (int) (x + 13), (int) (y - 9), 20, 48};
        SDL_RenderFillRect(renderer, &rect2);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
        SDL_Rect spuare2 = {(int) (x + 1), (int) y, 80, 30};
        SDL_RenderFillRect(renderer, &spuare2);
    } else {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect = {(int) (x - 9), (int) (y + 52), 48, 20};
        SDL_RenderFillRect(renderer, &rect);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect2 = {(int) (x - 9), (int) (y + 5), 48, 20};
        SDL_RenderFillRect(renderer, &rect2);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
        SDL_Rect spuare2 = {(int) x, (int) y, 30, 80};
        SDL_RenderFillRect(renderer, &spuare2);
    }
}
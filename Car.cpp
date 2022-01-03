
#include "Car.h"

void Car::draw() {
    if (horizontal) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect = {x + 55, y - 9, 20, 48};
        SDL_RenderFillRect(renderer, &rect);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect2 = {x + 13, y - 9, 20, 48};
        SDL_RenderFillRect(renderer, &rect2);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
        SDL_Rect spuare2 = {x + 1, y, 80, 30};
        SDL_RenderFillRect(renderer, &spuare2);
    } else {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect = {x - 9, y + 52, 48, 20};
        SDL_RenderFillRect(renderer, &rect);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect2 = {x - 9, y + 5, 48, 20};
        SDL_RenderFillRect(renderer, &rect2);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
        SDL_Rect spuare2 = {x, y, 30, 80};
        SDL_RenderFillRect(renderer, &spuare2);
    }
}
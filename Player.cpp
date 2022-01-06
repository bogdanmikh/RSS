#include "Player.h"
#include <SDL.h>
#include "Input.h"
#include "Car.h"

void Player::draw()  {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect6 = {(int) (x - 9), (int) (y + 52), 48, 20};
        SDL_RenderFillRect(renderer, &rect6);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
        SDL_Rect rect5= {(int) (x - 9), (int) (y + 5), 48, 20};
        SDL_RenderFillRect(renderer, &rect5);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
        SDL_Rect spuare4= {(int) x, (int) y, 30, 80};
        SDL_RenderFillRect(renderer, &spuare4);
}


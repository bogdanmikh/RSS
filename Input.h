//
// Created by Bogdan project the "Russians street stories" on 03.01.2022.
//

#include <SDL.h>

class Input {
public:
    bool keys[1024];
    int keysFrames[1024] = { 0 };
    int frame = 0;
    bool quit;

    void pollEvents();
    bool shouldClose();
    bool isKeyDown(char keyCode);
    bool isKeyJustDown(char keyCode);
};

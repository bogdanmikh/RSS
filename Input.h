//
// Created by Lera-PC on 03.01.2022.
//

#include <SDL.h>

class Input {
public:
    bool keys[1024];
    bool quit;

    void pollEvents();
    bool shouldClose();
    bool isKeyDown(char keyCode);
};

#ifndef GAME_DEV_PATTERNS_ENGINE_H
#define GAME_DEV_PATTERNS_ENGINE_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "Player.h"
#include "CommandInvoker.h"

class Engine
{
public:
    Engine();
    ~Engine() = default;

public:
    void run();

public:
    void checkEvents();
    void draw();

private:
    sf::RenderWindow window;
    sf::Clock clock;
    CommandInvoker commandInvoker;

private:
    Player player;
};


#endif //GAME_DEV_PATTERNS_ENGINE_H

#include "Engine.h"

Engine::Engine()
{
    window.create(sf::VideoMode(800, 600), "command pattern");
}

void Engine::run()
{
    commandInvoker.sendCommand(new SendMessageCommand("Engine has been run."));

    while (window.isOpen())
    {
        checkEvents();
        draw();
    }
}

void Engine::checkEvents()
{
    float dt = clock.restart().asSeconds();

    sf::Event event{};
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            commandInvoker.sendCommand(new SendMessageCommand("Engine has been stopped."));

            window.close();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) ||
        sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) ||
        sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) ||
        sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        commandInvoker.sendCommand(new MovePlayerCommand(&player, dt));
    }
}

void Engine::draw()
{
    window.clear(sf::Color(128, 128, 128));
    window.draw(player);
    window.display();
}

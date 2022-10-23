#include "Player.h"

Player::Player()
{
    speed = 100;
    shape.setSize(sf::Vector2f(32, 32));
    shape.setFillColor(sf::Color::Yellow);
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(shape, states);
}

void Player::move(float dt)
{
    sf::Vector2f velocity = sf::Vector2f(0, 0);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        velocity.y -= speed * dt;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        velocity.y += speed * dt;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        velocity.x -= speed * dt;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        velocity.x += speed * dt;
    }

    auto velocityLength = (float) sqrt(pow(velocity.x, 2) + pow(velocity.y, 2));
    velocity /= (velocityLength != 0) ? velocityLength : 1;

    shape.move(velocity * (speed / 1000));
}

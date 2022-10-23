#ifndef GAME_DEV_PATTERNS_PLAYER_H
#define GAME_DEV_PATTERNS_PLAYER_H

#include "SFML/Graphics.hpp"
#include <cmath>

class Player : public sf::Drawable
{
public:
    Player();
    ~Player() override = default;

public:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:
    void move(float dt);

private:
    sf::RectangleShape shape;
    float speed;
};


#endif //GAME_DEV_PATTERNS_PLAYER_H

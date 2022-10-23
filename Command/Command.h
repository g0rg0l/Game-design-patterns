#ifndef GAME_DEV_PATTERNS_COMMAND_H
#define GAME_DEV_PATTERNS_COMMAND_H

#include "Player.h"
#include <iostream>

class Command
{
public:
    Command() = default;
    virtual ~Command() = default;

public:
    virtual void execute() = 0;

};


class MovePlayerCommand : public Command
{
public:
    MovePlayerCommand(Player* player, float dt);
    ~MovePlayerCommand() override = default;

public:
    void execute() override;

private:
    Player* player;
    float dt;
};


class SendMessageCommand : public Command
{
public:
    explicit SendMessageCommand(std::string message);
    ~SendMessageCommand() override = default;

public:
    void execute() override;

private:
    const std::string message;
};


#endif //GAME_DEV_PATTERNS_COMMAND_H

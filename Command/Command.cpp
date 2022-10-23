#include "Command.h"

MovePlayerCommand::MovePlayerCommand(Player* player, float dt)
    : player(player), dt(dt)
{

}

void MovePlayerCommand::execute()
{
    player->move(dt);
}


SendMessageCommand::SendMessageCommand(std::string message)
    : message(std::move(message))
{

}

void SendMessageCommand::execute()
{
    std::cout << message << std::endl;
}

#ifndef GAME_DEV_PATTERNS_COMMANDINVOKER_H
#define GAME_DEV_PATTERNS_COMMANDINVOKER_H

#include "Command.h"

class CommandInvoker
{
public:
    CommandInvoker() = default;
    ~CommandInvoker() = default;

public:
     void sendCommand(Command* command);
};


#endif //GAME_DEV_PATTERNS_COMMANDINVOKER_H

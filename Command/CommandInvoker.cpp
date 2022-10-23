#include "CommandInvoker.h"

void CommandInvoker::sendCommand(Command* command)
{
    command->execute();
    delete command;
}
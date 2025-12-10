#include "command.h"
#include <iostream>

CommandRegistry::~CommandRegistry() {
  // Commands are static, so we don't delete them
}

CommandRegistry &CommandRegistry::getInstance() {
  static CommandRegistry instance;
  return instance;
}

void CommandRegistry::registerCommand(const std::string &argument,
                                      Command *command) {
  commands[argument] = command;
}

bool CommandRegistry::executeCommand(const std::string &argument) {
  auto it = commands.find(argument);
  if (it != commands.end()) {
    it->second->execute();
    return true;
  }
  return false;
}

bool CommandRegistry::hasCommand(const std::string &argument) const {
  return commands.find(argument) != commands.end();
}

std::map<std::string, std::string> CommandRegistry::getAllCommands() const {
  std::map<std::string, std::string> result;
  for (const auto &pair : commands) {
    result[pair.first] = pair.second->getDescription();
  }
  return result;
}

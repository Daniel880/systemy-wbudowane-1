#ifndef COMMAND_H
#define COMMAND_H

#include <map>
#include <string>

// Base class for all commands
class Command {
public:
  virtual ~Command() = default;
  virtual void execute() = 0;
  virtual std::string getDescription() const = 0;
};

// Command registry - singleton pattern for managing all commands
class CommandRegistry {
private:
  std::map<std::string, Command *> commands;

  CommandRegistry() = default;
  ~CommandRegistry();

public:
  // Get singleton instance
  static CommandRegistry &getInstance();

  // Register a command for a specific argument
  void registerCommand(const std::string &argument, Command *command);

  // Execute command for given argument
  bool executeCommand(const std::string &argument);

  // Check if command exists
  bool hasCommand(const std::string &argument) const;

  // Get all registered commands
  std::map<std::string, std::string> getAllCommands() const;
};

#endif // COMMAND_H

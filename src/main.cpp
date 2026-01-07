#include "command.h"
#include <iostream>
#include <string>

// Declare external command instances
extern Command janKowalskiCommand;
extern Command annaNowakCommand;
extern Command danielWyrwalCommand;
extern Command jonaszKorylCommand;
extern Command jerzyMankowskiCommand;
extern Command jerzyMankowskiSequelCommand;
extern Command danielWyrwal2Command;

extern Command bartoszWojciechowskiCommand;

// Add more extern declarations here for new students

int main(int argc, char *argv[]) {
  CommandRegistry &registry = CommandRegistry::getInstance();

  // Register all commands here - add new students below
  registry.registerCommand("JanKowalski", &janKowalskiCommand);
  registry.registerCommand("AnnaNowak", &annaNowakCommand);
  registry.registerCommand("DanielWyrwal", &danielWyrwalCommand);
  registry.registerCommand("JonaszKoryl", &jonaszKorylCommand);
  registry.registerCommand("JerzyMankowski", &jerzyMankowskiCommand);
  registry.registerCommand("JerzyMankowskiSequel", &jerzyMankowskiSequelCommand);
  registry.registerCommand("DanielWyrwal2", &danielWyrwal2Command);
  registry.registerCommand("BartoszWojciechowski", &bartoszWojciechowskiCommand);


  if (argc < 2) {
    std::cout << "Usage: sw <StudentName>" << std::endl;
    std::cout << "\nAvailable commands:" << std::endl;

    // Automatically list all registered commands
    auto commands = registry.getAllCommands();
    for (const auto &pair : commands) {
      std::cout << "  " << pair.first << " - " << pair.second << std::endl;
    }

    return 1;
  }

  std::string argument = argv[1];

  // Execute the command if it exists
  if (registry.executeCommand(argument)) {
    return 0;
  } else {
    std::cout << "Unknown command: " << argument << std::endl;
    std::cout << "\nAvailable commands:" << std::endl;

    auto commands = registry.getAllCommands();
    for (const auto &pair : commands) {
      std::cout << "  " << pair.first << " - " << pair.second << std::endl;
    }

    return 1;

  }
}

=======
  
}
>>>>>>> BartoszWojciechowski

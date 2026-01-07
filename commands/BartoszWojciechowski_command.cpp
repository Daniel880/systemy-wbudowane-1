#include "command.h"
#include <iostream>

class BartoszWojciechowskiClass : public Command {
public:
  void execute() override {
    std::cout << "=== Bartosz Wojciechowski Command ===" << std::endl;
    std::cout << "Rysunek Bartosza:" << std::endl;

    std::cout << "     ******    " << std::endl;
    std::cout << "  *************" << std::endl;
    std::cout << "  ******       " << std::endl;
    std::cout << "    | .  .  |" << std::endl;
    std::cout << "    |       |" << std::endl;
    std::cout << "    |  |_|  |" << std::endl;
    std::cout << "     \\_____/ " << std::endl;

    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Rysuje rysunek Bartosza";
  }
};

// Global instance - will be registered in main.cpp
BartoszWojciechowskiClass bartoszWojciechowskiCommand;

#include "command.h"
#include <iostream>

class MarcinKociolekCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Marcin Kociolek Command ===" << std::endl;
    std::cout << "Pamietaj:" << std::endl;

    std::cout << "Nie pozdrawiam." << std::endl;

    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Powie Ci mile slowo";
  }
};

// Global instance - will be registered in main.cpp
MarcinKociolekCommand marcinKociolekCommand;

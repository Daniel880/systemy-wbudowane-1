#include "command.h"
#include <iostream>

class JerzyMankowskiCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Jerzy Mankowski Command ===" << std::endl;
    std::cout << "Rysunek JURASA:" << std::endl;

    std::cout << "  0  " << std::endl;
    std::cout << "(- -)" << std::endl;
    std::cout << "  |  " << std::endl;
    std::cout << "(- -)" << std::endl;
    std::cout << "JURAS" << std::endl;
  }

  std::string getDescription() const override {
    return "Rysuje rysunek JURASA";
  }
};

// Global instance - will be registered in main.cpp
JerzyMankowskiCommand jerzyMankowskiCommand;

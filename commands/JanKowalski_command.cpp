#include "command.h"
#include <iostream>

class JanKowalskiCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Jan Kowalski Command ===" << std::endl;
    std::cout << "Rysunek Jana Kowalskiego:" << std::endl;

    std::cout << "       *" << std::endl;
    std::cout << "      ***" << std::endl;
    std::cout << "     *****" << std::endl;
    std::cout << "    *******" << std::endl;
    std::cout << "   *********" << std::endl;
    std::cout << "  ***********" << std::endl;
    std::cout << " *************" << std::endl;
    std::cout << "    |     |" << std::endl;
    std::cout << "    |  _  |" << std::endl;
    std::cout << "    | |_| |" << std::endl;
    std::cout << "    |_____|" << std::endl;

    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Rysuje rysunek Jana Kowalskiego";
  }
};

// Global instance - will be registered in main.cpp
JanKowalskiCommand janKowalskiCommand;

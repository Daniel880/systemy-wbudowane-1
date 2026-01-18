#include "command.h"
#include <iostream>

class BarbaraKrysCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Barbara Krys Command ===" << std::endl;
    std::cout << "Rysunek Barbary Krys:" << std::endl;

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
    return "Rysuje rysunek Barbary Krys";
  }
};

// Global instance - will be registered in main.cpp
BarbaraKrysCommand barbaraKrysCommand;

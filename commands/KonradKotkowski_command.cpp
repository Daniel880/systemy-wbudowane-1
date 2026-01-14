#include "command.h"
#include <iostream>

class KonradKotkowskiCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Konrad Kotkowski Command ===" << std::endl;
    std::cout << "Plik Konrada Kotkowskiego:" << std::endl;

    std::cout << "       He" << std::endl;
    std::cout << "      HeHeHe" << std::endl;
    std::cout << "     HeHeHeHe" << std::endl;

    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Rysuje rysunek Konrada Kotkowskiego";
  }
};

// Global instance - will be registered in main.cpp
KonradKotkowskiCommand KonradKotkowskiCommand;

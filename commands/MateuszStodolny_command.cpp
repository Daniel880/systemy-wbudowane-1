#include "command.h"
#include <iostream>

class MateuszStodolnyCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Mateusz Stodolny Command ===" << std::endl;
    std::cout << "Rysunek Mateusz Stodolny:" << std::endl;

    std::cout << "       *" << std::endl;
    std::cout << "      ***" << std::endl;
    std::cout << "     *****" << std::endl;
    std::cout << "    *******" << std::endl;
    std::cout << "   *********" << std::endl;
    std::cout << "  ***********" << std::endl;
    std::cout << " *************" << std::endl;
 
    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Rysuje rysunek";
  }
};

// Global instance - will be registered in main.cpp
MateuszStodolnyCommand mateuszStodolnyCommand;

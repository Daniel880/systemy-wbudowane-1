#include "command.h"
#include <iostream>

class PiotrKrzyzaniakCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Piotr Krzyzaniak Command ===" << std::endl;
    std::cout << "Rysunek Piotra Krzyzaniaka:" << std::endl;

    std::cout << "       *            *" << std::endl;
    std::cout << "      ***          ***" << std::endl;
    std::cout << "     *****        *****" << std::endl;
    std::cout << "    *******      *******" << std::endl;
    std::cout << "   **********************" << std::endl;
    std::cout << "  ************************" << std::endl;
    std::cout << " **************************" << std::endl;
    std::cout << "    |                  |" << std::endl;
    std::cout << "    |  _            _  |" << std::endl;
    std::cout << "    | |_|          |_| |" << std::endl;
    std::cout << "    |__________________|" << std::endl;

    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Rysuje rysunek Piotra Krzyzaniaka";
  }
};

// Global instance - will be registered in main.cpp
PiotrKrzyzaniakCommand piotrKrzyzaniakCommand;

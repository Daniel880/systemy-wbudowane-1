#include "command.h"
#include <iostream>

class NatanSzymanskiCommand : public Command {
public:
  void execute() override {
   std::cout << "=== Natan Szymanski Command ===" << std::endl;
    std::cout << "Rysunek Natana Szymanskiego:" << std::endl;

    std::cout << "       /**\\" << std::endl;
    std::cout << "      /***\\" << std::endl;
    std::cout << "     /*****\\" << std::endl;
    std::cout << "    /*******\\" << std::endl;
    std::cout << "   /*********\\" << std::endl;
    std::cout << "  /***********\\" << std::endl;
    std::cout << " /*************\\" << std::endl;
    std::cout << "      |____|" << std::endl;

    std::cout << "\n=============================" << std::endl;
  }

  std::string getDescription() const override {
    return "NS";
  }
};

// Global instance - will be registered in main.cpp
NatanSzymanskiCommand natanSzymanskiCommand;

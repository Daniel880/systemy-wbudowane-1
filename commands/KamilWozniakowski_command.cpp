#include "command.h"
#include <iostream>

class KamilWozniakowskiCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Kamil Wozniakowski Command ===" << std::endl;
    std::cout << "Executing function for Kamil Wozniakowski" << std::endl;
    std::cout << "bedzie," << std::endl;
    std::cont << "bedzie zabawa," << std::endl;
    std::cout << "bedzie sie dzialo" << std::endl;
    std::cout << "i znowu nocy bedzie malo" << std::endl;
    std::cout << "============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Balcanica od Kamila Wozniakowskiego";
  }
};

// Global instance - will be registered in main.cpp
KamilWozniakowskiCommand kamilWozniakowskiCommand;

#include "command.h"
#include <iostream>

class JonaszKorylCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Jonasz Koryl Command ===" << std::endl;
    std::cout << "Executing function for Jonasz Koryl" << std::endl;
    std::cout << "Student ID: 153019" << std::endl;
    std::cout << "====================" << std::endl;
  }

  std::string getDescription() const override {
    return "Zwraca opis studenta JonaszKoryl";
  }
};

// Global instance - will be registered in main.cpp
JonaszKorylCommand jonaszKorylCommand;

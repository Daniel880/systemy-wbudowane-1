#include "command.h"
#include <iostream>

class AnnaNowakCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Anna Nowak Command ===" << std::endl;
    std::cout << "Executing function for Anna Nowak" << std::endl;
    std::cout << "Student ID: 67890" << std::endl;
    std::cout << "============================" << std::endl;
  }

  std::string getDescription() const override {
    return "Zwraca opis studenta Anna Nowak";
  }
};

// Global instance - will be registered in main.cpp
AnnaNowakCommand annaNowakCommand;

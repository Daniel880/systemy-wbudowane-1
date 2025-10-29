#include "command.h"
#include <iostream>

class MarcelKaczmarczykCommand : public Command {
public:
  void execute() override {
    std::cout<<"essa";
  }

  std::string getDescription() const override {
    return "Rysuje rysunek Jana Kowalskiego";
  }
};

// Global instance - will be registered in main.cpp
MarcelKaczmarczykCommand marcelKaczmarczykCommand;

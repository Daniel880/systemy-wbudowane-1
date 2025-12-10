#include "command.h"
#include <iostream>

class DanielWyrwalCommand : public Command {

public:
  void execute() override { std::cout << " TEST1 " << std::endl; }

  std::string getDescription() const override { return "TEST2 "; }
};

DanielWyrwalCommand danielWyrwalCommand;
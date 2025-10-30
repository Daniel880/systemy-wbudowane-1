#include "command.h"
#include <iostream>

class DanielWyrwal2Command : public Command {

public:
  void execute() override { std::cout << " Test komendy nr 2 " << std::endl; }

  std::string getDescription() const override { return "Opis komendy nr 2 "; }
};

DanielWyrwal2Command danielWyrwal2Command;
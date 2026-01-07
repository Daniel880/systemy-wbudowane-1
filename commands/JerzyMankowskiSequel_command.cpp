#include "command.h"
#include <iostream>

class JerzyMankowskiSequelCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Jerzy Mankowski Sequel Command ===" << std::endl;
    std::cout << "Wielki powrot Jerzego:" << std::endl;

    for(int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
	}
  }

  std::string getDescription() const override {
    return "Koniec powrotu Jerzego";
  }
};

// Global instance - will be registered in main.cpp
JerzyMankowskiSequelCommand jerzyMankowskiSequelCommand;

#include "command.h"
#include <iostream>


	class PiotrGoinskiCommand : public Command { 
	public: 
	  void execute() override { 
	    std::cout << "=== Piotr Goinski Command ===" << std::endl; 
	    std::cout << "Student ID: 42069" << std::endl; 
	}	
	
	std::string getDescription() cons override { 
	  return "Zwraca opis studenta Piotra Goinskiego";
	}
	};
	
	PiotrGoinskiCommand piotrGoinskiCommand;

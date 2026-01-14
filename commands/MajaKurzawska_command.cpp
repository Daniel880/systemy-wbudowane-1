#include "command.h"
#include <iostream>

class MajaKurzawskaCommand: public Command {
public:
	void execute() override {
	std::cout << "=== Maja Kurzawska ===" <<std::endl;
	std::cout << "Executing funtcion for Maja Kurzawska" << std::endl;
	std::cout << "Student ID: 152788" << std::endl;
	std::cout << "===================" <<std::endl;
}


std::string getDescription() const override {
	return "Zwraca opis studenta Maja Kurzawska";
}
};

MajaKurzawskaCommand majaKurzawskaCommand;

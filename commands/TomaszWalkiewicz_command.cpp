#include "command.h"
#include <iostream>
#include <thread>
#include <chrono>

class TomaszWalkiewicz : public Command{
public:
 void execute() override{
	using namespace std::chrono_literals;

	int counter = 0;
	int a =0;
	while(a<=1){

		std::cout<< "KABOOM?" <<std::endl;
		std::this_thread::sleep_for(1s);
		a++;
		
	}

	a = 0;
	while(a<=1){
		std::cout<< "Yes Rico. KABOOM!!" << std::endl;
		std::this_thread::sleep_for(1s);
		a++;
	}

	a = 0;
	while(a<=5){
		std::cout<< "KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM, KABOOOM" <<std::endl;
		std::this_thread::sleep_for(1s);
		a++;
	}	
 std::string getDescription() const override{
  return "Pingwiny z Madgaskaru be like:";
 }
};

// Global instance - will be registered in main.cpp
TomaszWalkiewiczCommand tomaszWalkiewiczCommand;

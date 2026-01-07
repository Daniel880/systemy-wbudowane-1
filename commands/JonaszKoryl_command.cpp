#include "command.h"
#include <iostream>
#include <string>	

class JonaszKorylCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Jonasz Koryl Command ===" << std::endl;
    std::cout << "Executing function for Jonasz Koryl" << std::endl;
    int punkty = 0;
    string scoobyDoo, jezus, darude;
    std::cout << "Tadeusz Sznuk wita w programie 1 z 10!" << std::endl;
    std::cout << "Zadaniem bedzie odpowiedz na kilka pytan z roznych dziedzin, gotowi?" << std::end; 
    std::cout << "Pytanie 1: Jak ma na imie pies ze scooby-doo?" << std::endl;
    std::cin << scoobyDoo << std::endl;
    if (scoobyDoo == "scooby-doo" || scoobyDoo == "scooby doo"){
    std::cout << "Dobrze!" << std::endl;
    punkty = punkty +1;
    }else{
    std::cout << "Zle! Nastepne pytanie: " << std::endl;
    } 
    std::cout << "Jak pan jezus powiedzial?" << std::endl;
    std::cin << jezus << std::endl;
    if (jezus == "tak jak pan jezus powiedzial"{
    std::cout << "Dobrze!" << std::endl;
    punkty = punkty +1;
    }else{
    std::cout << "Zle! Nastepne pytanie: " << std::endl;
    } 
    std::cout << "A na koniec - pytanie muzyczne. Co to za utwor?" << std::endl;
    std::cout << "Tudududu dudududud dudududu dudududu tudududu dudududu" << std::endl;
    std::cin << darude << std::endl;
    if (jezus == "darude sandstorm"{
    std::cout << "Dobrze!" << std::endl;
    punkty = punkty +1;
    }else{
    std::cout << "Zle!" << std::endl;
    }
    std::cout << "Zdobyles " <<punkty<<" punktow!"<< std::endl;
    std::cout << "Dziekujemy za gre!" << std::endl;
    }

  std::string getDescription() const override {
    return "Uruchamia teleturniej 1 z 10";
  }
};

// Global instance - will be registered in main.cpp
JonaszKorylCommand jonaszKorylCommand;

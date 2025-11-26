#include <iostream>
#include <string>

int main() {
string jakiejDanuty = "twojamama";
std::cout << "Ej nie widziales moze Danuty" << std::endl;
std::cin >> jakiejDanuty;
while (jakiejDanuty != "jakiejdanuty"){
std::cout << "To nie jest pytanie na moja odpowiedz!"<<std::endl;
std::cin >> jakiejDanuty;
}
std::cout << "Tej co kradnie blache z huty";

return 0;
}

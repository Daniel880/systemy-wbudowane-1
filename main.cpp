#include <iostream>

int main() {
char jakiejDanuty[] = "twojastara";
std::cout << "Ej nie widziales moze Danuty" << std::endl;
std::cin >> jakiejDanuty;
if (jakiejDanuty == "jakiej Danuty?"){
std::cout <<"Tej do kradnie blache z huty"<<std::endl;
}
else {
std::cout<<"To nie jest pytanie na moja odpowiedz"<<std::endl;
std::cin >>jakiejDanuty;
}
return 0;
}

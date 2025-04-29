#include <iostream>

using namespace std;

int main(){

    int Entero = 15;
    int *PEntero = &Entero;
    void *PPunteroGenerico = PEntero;

    std::cout << "Entero " << Entero << std::endl;
    std::cout << "*PEntero " << *PEntero << std::endl;
    std::cout << "PEntero " << PEntero << std::endl;
    
    int *PInteger2 = (int *)PPunteroGenerico;
    std::cout << "*PInteger2 " << *PInteger2 << std::endl;

    return 0;
}


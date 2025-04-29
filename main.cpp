#include <iostream>
#include "Punteros.h"

using namespace std;

int main() {
    // Variables de prueba
    int Entero = 15;
    void *PPunteroGenerico = &Entero;

    // Llamada a la función para mostrar el valor del puntero genérico
    cout << "Valor en Entero: " << Entero << endl;
    mostrarValorPuntero(PPunteroGenerico);

    // Uso de punteros para intercambiar dos valores usando permutar (por valor)
    int a = 10, b = 20;
    cout << "Antes de permutar (por valor): a = " << a << ", b = " << b << endl;
    permutar(&a, &b);  // Llamada a permutar que intercambia los valores
    cout << "Después de permutar (por valor): a = " << a << ", b = " << b << endl;

    // Uso de punteros para intercambiar dos valores usando permutarDirecciones (por direcciones)
    cout << "Antes de permutarDirecciones: a = " << a << ", b = " << b << endl;
    permutarDirecciones(&a, &b);  // Llamada a permutar que intercambia las direcciones
    cout << "Después de permutarDirecciones: a = " << a << ", b = " << b << endl;

    return 0;
}

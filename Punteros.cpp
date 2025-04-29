#include <iostream>
#include "Punteros.h"

using namespace std;

// Función para mostrar el valor al que apunta un puntero genérico
void mostrarValorPuntero(void *PPunteroGenerico) {
    int *PInteger2 = (int *)PPunteroGenerico;  // Cast de void* a int*
    cout << "*PInteger2: " << *PInteger2 << endl;
}

// Función para permutar los valores a los que apuntan dos punteros
void permutar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Función para permutar las direcciones de dos punteros
void permutarDirecciones(int *a, int *b) {
    int *temp;
    temp = a;
    a = b;
    b = temp;

    // Imprimir las direcciones para demostrar el intercambio
    cout << "Dentro de permutarDirecciones: a apunta a " << a << ", b apunta a " << b << endl;
}

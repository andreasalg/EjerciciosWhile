/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100. */

#include <iostream>

using namespace std;

int main() 
{
    int i = 1;
    int suma = 0;
    
    while (i <= 100) {
        suma += i * i;
        i++;
    }
    cout << "La suma del cuadrados de los numeros entre 1 y 100 es: " << suma;
}
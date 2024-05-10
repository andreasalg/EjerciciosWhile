/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

int main() 
{
    int num;
    cout << "Introduce un numero: ";
    cin >> num;

    int suma = 0;
    int i = 1;

    while (i <= num) {
        suma += i++; 
    }

    cout << "La suma de los numeros desde 1 hasta " << num << " es " << suma;

}
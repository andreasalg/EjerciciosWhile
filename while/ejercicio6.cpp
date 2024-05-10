/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include <iostream>

using namespace std;

int main() 
{
    int suma = 0, i =100;

    while (i <= 200) {
        if (i % 2 == 0) {
            suma += i;
        }
        i++;
    }

    cout << "La suma de los numeros pares entre el 100 y el 200 es: " << suma;

}
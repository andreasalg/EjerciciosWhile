/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int main()
{
    const int ESTUDIANTES = 10;
    float suma = 0;
    float notas[ESTUDIANTES];
    float promedio;
    int i = 0;

    cout << "Ingrese las notas de cada uno de los " << ESTUDIANTES << " estudiantes:" << endl;

    while (i < ESTUDIANTES) {
        cout << "Nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
        if (notas[i] > 100) {
            notas[i] = 100;
        }
        suma += notas[i];
        i++;
    }


    promedio = suma / ESTUDIANTES;

    cout << "El promedio general de la seccion es: " << promedio;
}
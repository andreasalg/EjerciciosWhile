/*Para un grupo de clase de 8 estudiantes, realice un programa que
    permita calcular y dar como salida lo siguiente:

✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo */

#include <iostream>
using namespace std;

int main()
{
    const int ESTUDIANTES = 8;
    int suma = 0, i = 0, aprobados = 0, reprobados = 0, notas[ESTUDIANTES];
    float promedio;

    cout << "Ingrese las notas de los " << ESTUDIANTES << " estudiantes:" << endl;
    while (i < ESTUDIANTES) {
        cout << "Ingrese la nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
        if (notas[i] > 100) {
            notas[i] = 100;
        }
        suma += notas[i];
        i++;
    }

    promedio = suma / ESTUDIANTES;

    while (i < ESTUDIANTES) {
        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
        i++;
    }

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

}
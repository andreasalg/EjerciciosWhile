/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo. */

#include <iostream>

using namespace std;

int main() 
{
int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vector1[longitud];
    int vector2[longitud];

    int i = 0;
    cout << "Ingrese los elementos del primer vector:" << endl;
    while (i < longitud) 
    {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector1[i];
        i++;
    }

    i = 0;
    cout << "Ingrese los elementos del segundo vector:" << endl;
    while (i < longitud) 
    {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector2[i];
        i++;
    }

    int productoPunto = 0;
    i = 0;
    while (i < longitud) 
    {
        productoPunto += vector1[i] * vector2[i];
        i++;
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto;
}

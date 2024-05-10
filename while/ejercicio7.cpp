/* Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector. */


#include <iostream>

using namespace std;


int main()
{
     int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vector1[longitud];
    int vector2[longitud];
    int sumaVector[longitud];

    int i = 0;
    cout << "Ingrese los elementos del primer vector:" << endl;
    while (i < longitud) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector1[i];
        i++;
    }

    i = 0;
    cout << "Ingrese los elementos del segundo vector:" << endl;
    while (i < longitud) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < longitud) {
        sumaVector[i] = vector1[i] + vector2[i];
        i++;
    }

    cout << "La suma de los dos vectores es:" << endl;
    i = 0;
    while (i < longitud) {
        cout << sumaVector[i] << " ";
        i++;
    }

}


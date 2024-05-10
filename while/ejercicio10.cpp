/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>

using namespace std;

#define FILAS 5
#define COLUMNAS 5

int matriz[FILAS][COLUMNAS];
int transpuesta[FILAS][COLUMNAS];
int filas, columnas;

void ingresar()
{
    int num;
    int x = 0;
    while (x < filas)
    {
        int y = 0;
        while (y < columnas)
        {
            cout << "ingresar numero en fila " << x + 1 << ", columna " << y + 1 << ": ";
            cin >> num;
            matriz[x][y] = num;
            y++;
        }
        x++;
    }
}

void transponer()
{
    int x = 0;
    while (x < filas)
    {
        int y = 0;
        while (y < columnas)
        {
            transpuesta[y][x] = matriz[x][y];
            y++;
        }
        x++;
    }

    cout << "\nTransposicion de matriz ingresada:" << endl;
    int x = 0;
    while (x < columnas)
    {
        cout << "[";

        int y = 0;
        while (y < filas)
        {
            if (y == filas - 1)
            {
                cout << transpuesta[x][y] << "]" << endl;
            }
            else
            {
                cout << transpuesta[x][y] << ", ";
            }
            y++;
        }
        x++;
    }
}

int main()
{
    cout << "\ningresar cantidad de filas: ";
    cin >> filas;
    cout << "ingresar cantidad de columnas: ";
    cin >> columnas;

    if (filas <= FILAS && columnas <= COLUMNAS)
    {
        ingresar();
        transponer();
    }
    else
    {
        cout << "\nLa cantidad de filas y columnas debe ser menor o igual a " << FILAS << " y " << COLUMNAS << " respectivamente." << endl;
    }

}
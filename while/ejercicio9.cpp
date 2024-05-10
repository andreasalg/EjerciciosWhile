/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

#define FILAS 5
#define COLUMNAS 5

int matriz1[FILAS][COLUMNAS];
int matriz2[FILAS][COLUMNAS];
int producto[FILAS][COLUMNAS];
int filas1, filas2, columnas1, columnas2;

void ingresarMatriz(int numMatriz)
{
    int i = 0;
    int numFilas, numColumnas;
    int(*matriz)[COLUMNAS];
    string etiquetaMatriz;

    if (numMatriz == 1)
    {
        matriz = matriz1;
        etiquetaMatriz = "matriz 1";
    }
    else
    {
        matriz = matriz2;
        etiquetaMatriz = "matriz 2";
    }

    cout << "\nIngrese cantidad de filas para " << etiquetaMatriz << ": ";
    cin >> numFilas;
    cout << "Ingrese cantidad de columnas para " << etiquetaMatriz << ": ";
    cin >> numColumnas;
    cout << endl;

    while (i < numFilas)
    {
        int j = 0;
        while (j < numColumnas)
        {
            cout << etiquetaMatriz << ": Ingrese el numero en fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    if (numMatriz == 1)
    {
        filas1 = numFilas;
        columnas1 = numColumnas;
    }
    else
    {
        filas2 = numFilas;
        columnas2 = numColumnas;
    }
}

void multiplicarMatrices()
{
    int i = 0;

    if (columnas1 != filas2)
    {
        cout << "\nLas matrices no son compatibles." << endl;
        return;
    }

    while (i < filas1)
    {
        int j = 0;
        while (j < columnas2)
        {
            producto[i][j] = 0;
            int k = 0;
            while (k < columnas1)
            {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    cout << "\nProducto de matrices ingresadas:" << endl;
    i = 0;
    while (i < filas1)
    {
        cout << "[";
        int j = 0;
        while (j < columnas2)
        {
            cout << producto[i][j];
            if (j != columnas2 - 1)
                cout << ", ";
            j++;
        }
        cout << "]" << endl;
        i++;
    }
}

int main()
{
    ingresarMatriz(1);
    ingresarMatriz(2);
    multiplicarMatrices();
}

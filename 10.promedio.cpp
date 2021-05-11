#include <iostream>
using namespace std;

float promedio(int numeros[], int terminos)
{
    float promedio = 0;
    for(int id = 0; id < terminos; id++)
    {
        promedio += numeros[id];
    }

    promedio /= terminos;

    return promedio;
}

int main (void)
{
    int terminos = 0;
    int numero = 0;

    cout << "¿De qué tamaño quieres tu lista? ";
    cin >> terminos;
    
    int numeros [terminos];

    for(int id = 0; id < terminos; id++)
    {
        cout << "Dame el número " << id+1 << ": ";
        cin >> numero;

        numeros[id] = numero;
    }

    cout << promedio(numeros, terminos) << endl;
}
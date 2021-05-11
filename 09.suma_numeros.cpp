#include <iostream>
using namespace std;

// Suma de números mientras el número sea diferente de cero
int main(void)
{
    int numero = 1;
    int suma = 1;

    while(numero != 0)
    {
        cout << "Dame un numero (cero para terminar): ";
        cin >> numero;
        suma += numero;
    } 
    

  cout << "la suma es: " << suma -1 << endl;
}
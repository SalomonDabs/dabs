#include <iostream>

using namespace std;


void bmi(float altura, float peso)
{
    float indice = peso / pow(altura,2); 
    cout << indice << endl;

    if(indice < 20)
    {
        cout << "Peso bajo" << endl;
    }    
    else if (indice < 25)
    {
        cout << "Normal" << endl;
    }
    else if (indice < 30)
    {
        cout << "Sobrepeso" << endl;
    }
    else if (indice < 40)
    {
        cout << "Obesidad" << endl;
    }
    else
    {
        cout << "Obesidad mórbida" << endl;
    }
}

int main(void)
{
    float peso = 0;
    cout << "Escribe tu peso (kg): ";
    cin >> peso;

    float altura = 0;
    cout << "Escribe tu altura (m): ";
    cin >> altura;

    bmi(altura, peso);

    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

void dentro_fuera(int punto_x, int punto_y, int centro_x, int centro_y, int radio)
{
    float distancia = sqrt(pow(punto_x-centro_x,2) + pow(punto_y-centro_y,2));

    if(distancia > radio)
    {
        cout << "Fuera de la circunferencia" << endl;
    }
    else if(distancia < radio)
    {
        cout << "Sobre la circunferencia" << endl;
    }
    else
    {
        cout << "Sobre la circunferencia" << endl;
    }
}

int main(void)
{
    float radio = 0;
    cout << "Escribe el radio: " << endl;
    cin >> radio;

    float centro_x = 0;
    cout << "Escribe la coordenada x del centro: " << endl;
    cin >> centro_x;

    float centro_y = 0;
    cout << "Escribe la coordenada y del centro: " << endl;
    cin >> centro_y;

    float punto_x = 0;
    cout << "Escribe la coordenada x del punto: " << endl;
    cin >> punto_x;

    float punto_y = 0;
    cout << "Escribe la coordenada y del punto: " << endl;
    cin >> punto_y;

    dentro_fuera(punto_x, punto_y, centro_x, centro_y, radio);

    return 0;
}
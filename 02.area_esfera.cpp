#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;


int area_esfera(int radio)
    {
    return 4 * M_PI * pow(radio, 2);
    }

int volumen_esfera(int radio)
    {
    return (4/3) * M_PI * pow(radio, 3);
    }

int main(void)
{
    cout << "Cálculo de area y volumen" << endl;

    int radio = 0;
    cout << "Dame el radio de la esfera: " << endl;
    cin >> radio;

    int area = area_esfera(radio);
    int volumen = volumen_esfera(radio);

    cout << "Area: " << area << " Volumen: " << volumen << endl;
}
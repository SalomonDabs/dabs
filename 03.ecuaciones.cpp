#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;


float ecuacion_1(int x)
{
    float x_rad = x * (M_PI/180);
    return pow((sin(1/x_rad)),2) / x; 
}

float ecuacion_2(int x)
{
    float x_rad = x * (M_PI/180);
    return pow(sin(x_rad), (1/3)) / (4*x) + (5 * M_PI * x) * tan(pow(x_rad,2));
}

int main(void)
{
    int x = 0;
    cout << "Dame un valor para x: " << endl;
    cin >> x;

    cout << "El resultado de la primera ecuacion es: " << ecuacion_1(x) << "\nEl resultado de la segunda ecuacion es: " << ecuacion_2(x) << endl;
    
    return 0;
}
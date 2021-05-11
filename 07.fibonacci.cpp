#include <iostream>

using namespace std;


void fibonacci(int terminos)
{
    int anterior = 0;

    int actual = 1;

    int contador = 1;

    cout << anterior << " ";

    while(contador < terminos)
        {
            cout << actual << " ";

            int siguiente = actual + anterior;

            anterior = actual;

            actual = siguiente;

            contador ++;
        }
}

int main(void)
{
    int terminos = 0;
    cout << "Dame cuántos términos quieres: " << endl;
    cin >> terminos;

    fibonacci(terminos);

    return 0;
}
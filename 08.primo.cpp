#include <iostream>
using namespace std;


int primo(int numero) 
{
    if (numero <= 1) 
    {
        bool cond = false;
        return cond;
    } 

int contador = 2;
    while(contador < numero)
    {
        if(numero % contador == 0)
        {
            bool cond = false;
            return cond;
        }
        contador += 1;
    }
bool cond = true;
return cond;
}


int main(void)
{
    int numero = 0;
    cout << "Dame un número: " << endl;
    cin >> numero;

    int es_primo = primo(numero);
    
    if(es_primo)
    {
        cout << "El número es primo" << endl;
    }
    
    else
    {
        cout << "El número no es primo" << endl;
    }

return 0;
}
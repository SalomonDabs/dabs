#include <iostream>

using namespace std;

// Definir la clase
class Persona
{
    // Atributos
    // Encapsulamiento
    public:   // Cualquier puede tener acceso a los atributos

        string nombre, apellidoMaterno, apellidoPaterno;
        string nacionalidad, residencia;

        int diasVacaciones;

        float peso, altura;

        bool trabajo, empresa;

        // Constructor
        Persona(string _nombre, string _apellidoPaterno, string _apellidoMaterno, int _edad)
        {
            nombre = _nombre;
            apellidoPaterno = _apellidoPaterno;
            apellidoMaterno = _apellidoMaterno;

            if (_edad <= 0)
            {
                edad = 1;
            }
            else
            {
                edad = _edad;
            }
        }
    
    private:

        int edad;

    // Metodos
    public:

        // Getter
        int getEdad(void)
        {
            return edad;
        }
        // Setter
        void setEdad(int _edad)
        {
            if (_edad <= 0)
            {
                edad = 1;
            }
            else
            {
                edad = _edad;
            }
        }

        void cumplirAgnos(void)
        {
            edad++; // edad += 1; edad = edad + 1;
        }

        void cambioResidencia(string nuevaResidencia)
        {
            // Revisa que la nueva residencia no esté vacía
            if(nuevaResidencia != "")
            {
                residencia = nuevaResidencia;
            }
        }

};

int main(void)
{
    Persona p1("Octavio", "Navarro", "Hinojosa", 456); // Crear un objeto de la clase Persona

    // p1.nombre = "Octavio";
    // p1.trabajo = true;
    // p1.nacionalidad = "Mexicano";
    // p1.edad = 345;

    cout << "El nombre del objeto p1 es: " << p1.nombre << " " << p1.apellidoPaterno<< endl;
    cout << "La edad del objeto p1 es: " << p1.getEdad() << endl;

    p1.cumplirAgnos();

    cout << "La edad nueva del objeto p1 es: " << p1.getEdad() << endl;

    Persona p2("qewrqwe", "asdfafda", "zcxzcvx", 789); // Crear un objeto de la clase Persona

    cout << "El nombre del objeto p2 es: " << p2.nombre << " " << p2.apellidoPaterno<< endl;
    p2.cumplirAgnos();
    cout << "La edad del objeto p2 es: " << p2.getEdad() << endl;
    p2.setEdad(45);
    cout << "La edad nueva del objeto p2 es: " << p2.getEdad() << endl;

    return 0;
}
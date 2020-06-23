#include <iostream>
#include <string.h>


using namespace std;

void cambiarNombre(string &nombre, string nuevoNombre);
void modifArray(int miArray[]);
void muestraArray(int miArray[], int size);

int main()
{

    string nombreOriginal = "Fabricio", nuevoNombre = "";
    cout<<"Hola: "<<nombreOriginal<<"\n";
    cout<<"Cual sera tu nuevo nombre?: ";
    cin>> nuevoNombre;
    cambiarNombre(nombreOriginal, nuevoNombre);
    cout<<nuevoNombre<<"\n";
    cout<<nombreOriginal;

    return 0;
}

void cambiarNombre(string &nombre, string nuevoNombre)
{
    nombre = nuevoNombre;
    cout<<"FELICIDADES! Has cambiado tu nombre a:"<<nombre;
    nuevoNombre = "nel";
    cout<<"\nNuevo nombre: "<<nuevoNombre<<"\n";
}
void modifArray(int myArray[])
{
    myArray[0] = 12;
    myArray[4] = 9000;
}

void muestraArray(int miArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " En la pos: " << i << " el valor es: " << miArray[i] << "\n";
    }
}

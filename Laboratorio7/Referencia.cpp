#include <iostream>
#include <string.h>


using namespace std;

void modifVar(int &num);
void modifArray(int miArray[]);
void muestraArray(int miArray[], int size);

int main()
{
    // VARIABLES CON PUNTERO 
    int *punt = NULL;
    int valor1 = 10;
    
    punt = &valor1;

    cout << "el numero es "<< *punt<<endl;
    //cout << "la direccion de memoria es "<< punt<<endl;
    modifVar(valor1);
    cout << "el nuevo numero es "<< *punt<<endl;


    //PASANDO ARREGLO COMO PARAMETRO
    int arreglo[5] = {1, 2, 3, 5, 5};
    muestraArray(arreglo, 5);
    cout << "---------Modificando array-----\n";
    modifArray(arreglo);
    muestraArray(arreglo, 5);

    return 0;
}

void modifVar(int &num)
{
    num = 3;
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
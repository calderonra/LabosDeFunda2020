#include <iostream>

using namespace std;

int main(){

    string producto;
    float precio, numdeunidades, total;

    cout<<"ingrese el nombre del producto: ";
    cin>> producto;

    cout<< "Ingrese precio del producto: ";
    cin>> precio;

    cout<<"Cuantas unidades lleva: ";
    cin>> numdeunidades;

    total= precio*numdeunidades;

    cout<<"Usted lleva "<<producto<<" Su total es de: "<<total<<endl;
    return 0;
    
}
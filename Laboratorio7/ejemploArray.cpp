#include "iostream"

using namespace std;

int main(){

    char aux='u';
//0 1 2 
    char miArreglo[3];

    
int tamano= sizeof(miArreglo)/sizeof(miArreglo[0]);

cout<<"El tamano es: "<<tamano<<endl;

    for(int i=0;i<tamano;i++){
        cout<<"Ingrese el caracter: "<<endl;
        cin>>aux;
        miArreglo[i]=aux;
        
    }

    for(int i=0;i<tamano;i++){
        cout<<"el caracter es: "<<miArreglo[i]<<endl;
    }


    return 0;
}
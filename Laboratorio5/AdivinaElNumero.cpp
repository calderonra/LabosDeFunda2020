#include <stdlib.h>     /* srand, rand */
#include<ctime>

#include <iostream>
using namespace std;



int main(){

int Secret=0;
//iniciando valor random 
  srand (time(NULL));
  //numero random entre 1 y 10
  Secret = rand() % 10 + 1;
//Termino inicializacion del random


//contador de intentos

int contador=0,x=0;

do {

    cout<<"Digita un numero entre 1 y 10 "<<endl;
    cin>>x;

    //Verificar si es mayor o menor para dar pistas 

    if (Secret<x) {
        cout<<"El numero es menor :o"<<endl;
    }else if (Secret>x) {
        cout<<"El numero es mayor :o"<<endl;
    }

    contador+=1;

}while (x!=Secret);

cout<<"GANASTE :O"<<endl;
cout<<"Tu numero de intentos fue: "<<contador<<endl;
    return 0;
} 

#include <iostream>

using namespace std;


/*Calcular el total a pagar de una renta de peliculas, el total sera calculado mediante
La suma de las 2 peliculas de  menor costo
*/

int main(){



//Variables que guardan el valor de las peliculas 
int peli1=0,peli2=0,peli3=0;


int menor1=0,menor2=0;

    cout<<"ingrese el precio de la pelicula1: "<<endl;
    cin>>peli1;

    cout<<"ingrese el precio de la pelicula2: "<<endl;
    cin>>peli2;

    cout<<"ingrese el precio de la pelicula3: "<<endl;
    cin>>peli3;

    if (peli1>peli2 && peli1>peli3){

        menor1=peli3;
        menor2=peli2;
    
    }
    if (peli2>peli1 && peli2>peli3){
        
        menor1=peli3;
        menor2=peli1;

    }
    if (peli3>peli1 && peli3>peli2){
        menor1=peli2;
        menor2=peli1;

    }

cout<<"El total es: "<<menor1+menor2<<endl;



    return 0;
}
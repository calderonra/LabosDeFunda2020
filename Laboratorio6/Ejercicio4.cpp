#include <iostream>

using namespace std;

int contadorDeVocales(){
    string letra="";
    int cont=0;
    cout<<"Bienvenido a el contador de vocales"<<endl;

    do
    {
        cout<<"Ingresa una letra: "<<endl;
        cin>>letra;

        if(letra=="a" || letra=="A"){
            cont++;
        }else if (letra=="e" || letra =="E")
        {
            cont++;
        }else if (letra=="i")
        {
            cont++;
        }else if (letra=="o")
        {
            cont++;
        }else if (letra=="u")
        {
            cont++;
        }
        

    } while (letra!="0");
    
    return cont;

}


int main(){

int aux=contadorDeVocales();
    cout<<"El numero de vocales fue: "<<aux<<endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){

    string acum = "", numerosAcum = "", ejemplo ="";
    int iterador = 1, acumIterador = 0;
    float budget = 0.0, ingreso = 0.0;
    char condicion = 'y';
    int numero=0;
    /*
    for (int i = 0; i<=10;i++){
        acum += "*";
        cout<<acum<<endl;
    }*/
/*
    while(condicion == 'y' || condicion == 'Y'){
        cout<<"Ingresa dinero: ";
        cin>> ingreso;
        budget += ingreso;
        cout<<"Quieres ingresar mas? [y/n]"<<endl;
        cin>>condicion;
    }
    cout<<"Ingresas un total de: $"<<budget;
*/
//WHILE COMO FO
/*
    while (iterador < 10){
        acumIterador += iterador;
        cout<<acumIterador<<endl;
        iterador++;
    }*/
    
    /*
    cout<<"DO-WHILE"<<endl;

    do{
        acumIterador += iterador;
        cout<<acumIterador<<endl;
        iterador++;
    }while(iterador < 10);
    */
    
    ejemplo = "Salu2";
    int ultimaPos =ejemplo.length();
    /*cout<<"letra en la ultima pos: "<< ejemplo.at(ultimaPos-1)<<endl;
    cout<<ejemplo.at(4)<<endl;
    cout<<ejemplo[0]<<endl;
*/
//cout<<ultimaPos<<endl;
//cout<<ejemplo.at(0)<<endl;
//cout<<ejemplo[0]<<endl;

cout<<ejemplo.at(ultimaPos-1)<<endl;
cout<<ejemplo[ultimaPos-1]<<endl;

    return 0;
}
#include <iostream>


using namespace std;


void farenAcelcius(){
    float faren, cel;
    cout<<"Bienvenido al concersor de unidades"<<endl;
    cout<<"Ingrese la temp a convertir: "<<endl;
    cin>>cel;
    faren=(cel*9/5)+32;

    cout<<"La temperatura en farenheit es: "<<faren<<endl;

}



void celciusAfaren(){
    float faren, cel;
    cout<<"Bienvenido al concersor de unidades"<<endl;
    cout<<"Ingrese la temp a convertir: "<<endl;
    cin>>faren;
    cel=(faren-32)*5/9;
    cout<<"La temperatura en celcius es: "<<cel<<endl;
    
}

int main(){
int opcion=0;

    do {
        
        cout<<"1--------Convertir Faren a Cel"<<endl;
        cout<<"2--------Convertir cel a faren"<<endl;
        cout<<"3--------Salir";
        cin>>opcion;

        switch(opcion){
            case 1: farenAcelcius();
            break;
            case 2: celciusAfaren();
            break;
        }

    }while (opcion!=3);    
    cout<<"Gracias vuelva pronto";
    return 0;
}
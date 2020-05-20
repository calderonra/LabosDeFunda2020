#include <cstdlib>
#include <iostream>

using namespace std;


int main(){

    int saldoinicial=1000,saldoActual=0,retiro=0,opcion,dinero;

    cout<<"bienvenido a tu cajero virtual :o "<<endl;
    cout<<"1-Ingrese dinero en la cuenta"<<endl;
    cout<<"2-Retirar dinero de la cuenta"<<endl;

    cin>>opcion;

    if(opcion==1){
        cout<<"Digite la cantidad de dinero a ingresar: "<<endl;
        cin>>dinero;
        saldoActual=saldoinicial+dinero;
        cout<<"Dinero en la cuenta: "<<saldoActual<<endl;

    } else if (opcion==2) {
        cout<<"Cantidad de dinero a retirar: "<<endl;
        cin>>dinero;
        if(saldoinicial<dinero){
            cout<<"Fondos insuficientes :c "<<endl;

        }else{
            saldoActual=saldoinicial-dinero;
            cout<<"En la cuenta te quedan "<<saldoActual<<endl;
        }
        //comprobacion de saldo en la cuenta

        
    }



    return 0;
}
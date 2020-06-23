#include <iostream>

using namespace std;


void inversorCarnets( int miArray[8],int carnetINV[8]){

    int aux=0;
    int contador2=0;

    for(int i=0;i<8;i++){
        cout<<"Ingrese el carnet numero por numero: "<<endl;
        cin>>aux;
        miArray[i]=aux;
        
    }


    for (int i = 7; i >= 0; i--){

        
        carnetINV[contador2]=miArray[i];
       // cout<<"La cuenta va en "<<contador2<<endl;
        //cout<<"El arreglo va "<<carnetINV[contador2];
        contador2++;

    }
    

}

void impresorCarnets(int carnet[], int carnetINV[]){

    cout<<"Tu carnet es: ";
    for (int i = 0; i < 8; i++)
    {
        cout<<carnet[i];
    }
    
    cout<<endl;

    cout<<"Tu carnet invertido es: ";
    for (int i = 0; i < 8; i++)
    {
        cout<<carnetINV[i];
    }

}


int main(){

    int carnet[8]={0};
    int carnetINV[8]={0};

    inversorCarnets(carnet,carnetINV);
    impresorCarnets(carnet,carnetINV);




    return 0;
}
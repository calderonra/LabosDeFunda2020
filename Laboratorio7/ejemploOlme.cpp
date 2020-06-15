#include "iostream"
#include <math.h>
using namespace std;

int main(){
    int arrLongitud[5];
    string arrNombres[5];
    string nombre;
    for(int i=0; i<5;i++){
        cin>>nombre;
        arrNombres[i]=nombre;
        arrLongitud[i]=nombre.length();
    }
    //i = 5; NO PASA
    for(int i=0; i<5;i++){
        cout<<"El nombre "<<arrNombres[i]<<" tiene longitud "<<arrLongitud[i]<<" caracteres"<<endl;
    }
    return 0;
}
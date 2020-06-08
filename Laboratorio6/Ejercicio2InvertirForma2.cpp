#include <iostream>
#include <string>

using namespace std;

/*
Elabore una función que reciba un entero y que retorne otro entero que
contenga los dígitos del anterior, en forma inversa. Por ejemplo, si recibe 275,
retornará 572. Imprima el resultado en la función main.
*/
int inversor(int numero){
    string numeroString = to_string(numero);
    string numeroInverso = "";

    //123 -> 321
    for (int i = numeroString.length()-1; i >= 0; i--){
        numeroInverso += numeroString.at(i);
    }
    
    return stoi(numeroInverso);
}
int main(){
    /*int num = 12; 
    int *num2 = &num;

    
    cout<<"Valor: "<<num<<" Direccion "<<&num<<
    "\nValor que esta en la direccion de memoria: "<< num2 << " : "<<*num2<<endl;*/
    int numero = 0, numeroReves=0;
    cin>> numero;
    numeroReves = inversor(numero);

    cout<<"Se ingreso: " <<numero<< " su equivalente al reves es: "<< numeroReves;
    return 0;
}


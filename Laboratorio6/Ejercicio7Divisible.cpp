//Un número es positivo negativo o 0
#include "iostream"
using namespace std;


float promedio(int cant){
	int num=0, acum=0, prom=0;
	for(int i=0; i<cant; i++){
		cout<<"Ingrese numero ";
		cin>>num;
		acum += num;
	}

	prom=acum/cant;

	return prom;
}


bool divisible(int m, int n){
	if(m%n==0){
		return true;
	} else{
		return false;
	}
}



int main()
{
int m, n;
cout<<"Ingrese m "<<endl;
cin>>m;
cout<<"Ingrese n"<<endl;
cin>>n;

bool valor = divisible(m,n);

	if(valor){
		cout<<"El numero es divisible";
	} else{
		cout<<"El numero no es divisible";
	}

	return 0;


}


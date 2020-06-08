#include "iostream"
using namespace std;

int inverso(int x){
    int numeroMutilado=0, inverso=0;
    while(x!=0){
        numeroMutilado = x%10;
        inverso = numeroMutilado + inverso*10;
        x = x/10;
    }
    return inverso;
}

int main(){
    int x; // 572
    cin>>x;
    x = inverso(x);
    cout<<x;
    return 0;
}
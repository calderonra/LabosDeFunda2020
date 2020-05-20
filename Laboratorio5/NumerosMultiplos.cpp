#include <iostream>

using namespace std;

int main() {

  int mul = 5;
  for (int i = 0; i < 40; i++) {

      if(i%mul==0){
          cout<<"El numero multiplo es: "<<i<<endl;
      }

  }

  return 0;
}

#include <iostream>
using namespace std;

int main(void) {

  float radio, perimetro, area;
  cout << "introduce el radio: "<< endl;
  cin >> radio;
  perimetro = 2 * 3.1415 * radio;
  area = 3.1415 * radio*radio;
  cout << "El perimetro es:" << endl << perimetro << endl;
  cout << "El area es:" << endl << area << endl;

  return 0;


}

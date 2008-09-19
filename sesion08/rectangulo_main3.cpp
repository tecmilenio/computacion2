#include <iostream>
#include "rectangulo.h"

using namespace std;

int main() {

  Rectangulo recs[2];
  
  recs[0] = Rectangulo(10,12);
  recs[1] = Rectangulo(20,20);

  cout << "El primer rectangulo, su area es: " << recs[0].CalcArea() << endl;
  cout << "El Segundo rectangulo, su area es: " << recs[1].CalcArea() << endl;

  return 0;

}

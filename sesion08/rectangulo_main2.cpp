#include <iostream>
#include "rectangulo.h"

using namespace std;

int main() {

  float ancho, largo;

  cout << "Dame el ancho y el largo del rectangulo" << endl;

  cin >> ancho >> largo;

  Rectangulo rec(ancho, largo);



  cout << "Primer rectangulo " << rec.getAncho() << " " << rec.getLargo() << rec.CalcArea();



  return 0;

}

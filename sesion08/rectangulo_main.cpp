#include <iostream>
#include "rectangulo.h"

using namespace std;

int main() {

  Rectangulo rec;

  float ancho, largo;

  cout << "Dame el ancho y el largo del rectangulo" << endl;

  cin >> ancho >> largo;

  rec.Inicializa(ancho, largo);

  cout << "El Rectangulo es de area: " << rec.CalcArea() << endl;

  cout << "Dame otro ancho y otro largo";

  cin >> ancho >> largo;

  rec.setAncho( ancho );
  rec.setLargo( largo );

  cout << "El Rectangulo es de area: " << rec.CalcArea() << endl;


  return 0;

}

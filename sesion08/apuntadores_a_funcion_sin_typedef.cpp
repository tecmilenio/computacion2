#include <iostream>
#include <cmath>

using namespace std;

float integral(float, float, float (*funcion)(float, float));

float constante(float, float=1);
float linea(float, float=1);
float cuadratica(float, float=1);
float cubica(float, float=1);

char tipos[4][20] = { "Constante", "Lineal", "Cuadratica","Cubica" };

float (*funciones[4])(float, float) = {&constante, &linea, &cuadratica, &cubica};

int main()
{
    
  int opcion = 0;


  do {
    cin >> opcion;
    cout << integral(0,1,*(*funciones[opcion])) << "\t" << &tipos[opcion][0] << "\n";
  } while (opcion > -1 and opcion < 4);
  
  return 0;
  
}

float constante(float x, float a) {
  return a;
}

float linea(float x, float a) {
  return a*x;
}

float cuadratica(float x, float a) {
  return a*x*x;
}

float cubica(float x, float a) {
  return a*x*x*x;
}

float integral(float desde, float hasta, float (*funcion)(float, float)) {
  if (abs(hasta-desde) < 0.000001)
    return (hasta-desde) * (*funcion)(hasta, 1);
  else {
    float enmedio = (hasta-desde)/2 + desde;
    return integral(desde, enmedio, *funcion) + integral(enmedio, hasta, *funcion);
  }
}

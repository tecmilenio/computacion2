#include <iostream>
#include <cmath>

using namespace std;

typedef float (*func)(float, float);

float integral(float, float, func);

float constante(float, float=1);
float linea(float, float=1);
float cuadratica(float, float=1);
float cubica(float, float=1);

char tipos[4][20] = { "Constante", "Lineal", "Cuadratica","Cubica" };

func funciones[4] = {&constante, &linea, &cuadratica, &cubica};

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

float integral(float desde, float hasta, func funcion) {
  if (abs(hasta-desde) < 0.000001)
    return (hasta-desde) * (*funcion)(hasta, 1);
  else {
    float enmedio = (hasta-desde)/2 + desde;
    return integral(desde, enmedio, *funcion) + integral(enmedio, hasta, *funcion);
  }
}

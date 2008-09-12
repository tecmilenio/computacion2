#include <iostream>
#include <cmath>

/* Este es un programa que calcula pi de forma recursiva */

using namespace std;

float calcpi(float); // Función que calcula PI
float fx(float);

float integral(float, float, float (*)(float )); // Integra

int main() {

  cout << "Integrando...\nEl valor de PI es:" << endl;
  cout << 4*integral(0,1,&calcpi) << endl;

  cout << "Integrando...\nEl valor la iintegral de fx de 0 a 1: " << endl;
  cout << integral(0,1,&fx) << endl;

}

float calcpi(float x) {

  return sqrt(1-x*x);

}


float fx(float x) {

  return x;
}

float integral(float desde, float hasta, float (*funcion)(float)) {

  if (abs(hasta-desde) < 0.000001)
    return (hasta-desde) * (*funcion)(hasta);
  else {
    float enmedio = (hasta-desde)/2 + desde;
    return integral(desde, enmedio, *funcion) + integral(enmedio, hasta, *funcion);
  }
  

}

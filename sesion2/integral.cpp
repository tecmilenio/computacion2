#include <iostream>
#include <cmath>

using namespace std;

float calcpi(float); // Función que calcula PI
float integral(float, float); // Integra

int main() {

  cout << "Integrando...\nEl valor de PI es:" << endl;
  cout << 4*integral(0,1) << endl;

}

float calcpi(float x) {

  return sqrt(1-x*x);

}

float integral(float desde, float hasta) {

  if (abs(hasta-desde) < 0.000001)
    return (hasta-desde) * calcpi(hasta);
  else {
    float enmedio = (hasta-desde)/2 + desde;
    return integral(desde, enmedio) + integral(enmedio, hasta);
  }
  

}

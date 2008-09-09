#include <iostream>

using namespace std;

float potencia(float, float);

int main() {

  int base, exponente;

  cout << "Dame una base y un exponente: " << endl;

  cin >> base >> exponente;

  cout << potencia(base,exponente);

  return 0;
}

float potencia(float base, float exponente) {

  if (exponente == 0)
    return 1;
  else
    return potencia(base, exponente-1)*base;

}

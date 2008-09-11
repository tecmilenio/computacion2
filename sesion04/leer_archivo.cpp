#include <iostream>
#include <fstream>

using namespace std;

int main() {

  fstream entrada("entradaprueba.txt", ios::in);

  int entero;
  float flotante;

  while( entrada >> entero >> flotante) {

    cout << entero*2 << "\t"<< flotante << "\n";
  }

  return 0;

}

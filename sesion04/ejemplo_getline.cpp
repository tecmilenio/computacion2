#include <iostream>
#include <fstream>

namespace archivo {

  std::fstream cout("archivo_out.txt", std::ios::out);
  std::fstream cin("archivo_in.txt", std::ios::in);

}

using namespace std;

int main() {

  const int tamano = 10;

  char str[ tamano ];

  cin.getline(str, tamano);

  cout << "metiste: " << str;

  float numero;

  while ( cin >> numero )
    cout << numero * 2;


  return 0;

}

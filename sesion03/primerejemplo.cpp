#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

  cout << "Hola mundo: \n un numero: ";

  ofstream archivo("archivo.txt", ios::out );

  archivo << "Hola mundo a archivo \n";

  float num = 91.5234000;

  cout << setprecision(7) << setiosflags(ios::fixed) << num;

  cout.put('a');
  cout.put(33);


  cout << "Algunos valores de la tabla ascii";

  for (int i = 32 ; i < 70; i ++) {
    cout << i << ": ";
    cout.put(i);
    cout << "\n";
  }


  char perro;

  perro = cin.get();

  cout << perro * 10;

  return 0;
}

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/***
 * 
 * Este es unprograma que imprime la tabla ASCII
 * En un archivo llamado ascii.txt
 *
 ***/
int main() {

  cout << "Comenzamos nuestro programa\n";

  
  ofstream archivo("ascii.txt", ios::out);

  for (int i = 32 ; i < 127 ; i++) {
    
    archivo << setw(3) << i << ": ";
    archivo.put(i);
    archivo << "\n";
    
  }

  cout << "Terminamos nuestro programa\n";

  int a = 6, b;
  b = a << 2;

  cout << "\n" << b << "\n";

  return 0;

}

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int tamano_str = 12;

int main() {

  int cantidad;
  float precio_unitario;
  // No poner numeros en los corchetes
  char descripcion[ tamano_str ]; 

  float precioTotal = 0;

  fstream archivo("datos_problema3.txt", ios::in);

  if (archivo.fail()) { // Esto es equivalente a usar un archivo.fail()

    cout << "No se pudo abrir el archivo de salida" << endl;
    exit(1);

  }

  cout << "============================================\n"  
       << "                   FACTURA                  \n" 
       << "---------- ----------- ---------- ----------\n"
       << " Cantidad  Descripcion Precio U.  Precio T. \n"
       << "========== =========== ========== ==========\n" << endl;
  
  while(archivo >> cantidad >> precio_unitario >> descripcion) {
    
    precioTotal += precio_unitario*cantidad;

    cout << setw(10) << cantidad << " "
	 << setw(12) << descripcion << " "
	 << setw(9) << setprecision(2) << setiosflags(ios::fixed) << precio_unitario << " "
	 << setw(9) << precio_unitario*cantidad << endl;
      
  }

  cout << "============================================\n"
       << setw(40) << "Total: " << precioTotal << endl;


  return 0;

}

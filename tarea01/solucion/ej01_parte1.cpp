#include <iostream>
#include <fstream>

using namespace std;

int main() {

  int matricula = 0,
    calificaciones[3] = {0}; // Inicializamos variables

  fstream archivo("salida_problema1.txt", ios::out);

  if (archivo.fail()) { // Esto es equivalente a usar un archivo.fail()

    cout << "No se pudo abrir el archivo de salida" << endl;
    exit(1);

  }

  while (true) { // Hacemos un ciclo hasta un break

    cout << "Dame una matricula, -1 para salir: ";
    cin >> matricula;

    if (matricula == -1) // Si encontramos la sentinela -1, salimos
      break;

    // Obtenemos las calificaciones del alumno

    for (int i = 0; i < 3; i++) {
      cout << "Calificacion " << i+1 << ": ";
      cin >> calificaciones[i];
    }

    // Imprimimos una linea en el archivo

    archivo << matricula << " " 
	    << calificaciones[0] << " " 
	    << calificaciones[1] << " "
	    << calificaciones[2] << endl;

  }

  cout << "Listo !!!" << endl;

  return 0;
  

}

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

  int matricula = 0,
    calificaciones[3] = {0}; // Inicializamos variables

  float promedioAcumulado = 0.0;
  int noDeAlumnos = 0;

  fstream archivo("salida_problema1.txt", ios::in);

  if (archivo.fail()) { // Esto es equivalente a usar un archivo.fail()

    cout << "No se pudo abrir el archivo de salida" << endl;
    exit(1);

  }

  cout << setw(10) << "Matricula" << "\t Promedio \n" << endl;

  while (archivo >> matricula >> calificaciones[0]
	 >> calificaciones[1] >> calificaciones[2] ) {
    // Leemos el archivo hasta el final...
    // OJO: El programa asume que el archivo esta bien escrito...

    float promedioAlumno = \
      (calificaciones[0] + calificaciones[1] + calificaciones[2])/3;

    cout << setw(10) << matricula << "\t" << setprecision(2) 
	 << setiosflags(ios::showpoint)  << setiosflags( ios::fixed)
	 << promedioAlumno << endl;
    
    promedioAcumulado += promedioAlumno;
    noDeAlumnos++;
    
  }

  cout << "\n";

  cout << "Promedio global: " << promedioAcumulado / noDeAlumnos 
       << "\n" << endl;

}

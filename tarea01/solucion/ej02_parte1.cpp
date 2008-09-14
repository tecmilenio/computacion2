#include <iostream>
#include <fstream>

using namespace std;

/***
 *
 * El archivo de entrada es un archivo `Lorem Ipsum` generado
 * en la pagina http://lorem-ipsum.perbang.dk/
 * 
 ***/

int main() {

  fstream archivo("text_problema2.txt", ios::in);

  char caracter;

  int numLineas = 0;
  int numCaracteres = 0;

  while ((caracter = archivo.get()) != EOF) { 
    // Obtenemos un caracter hasta llegar al final de archivo (EOF == Enf Of File)

    if (caracter == '\n') {

      // Imprimimos los resultados de esa linea
      cout << "La linea " << numLineas+1 << " tiene: "
	   << numCaracteres << " caracteres." << endl;

      // aumentamos el contador de linas
      // reseteamos el contador de caracteres
      numLineas++;
      numCaracteres=0;
    } else {
      // Aumentamos la linea
      numCaracteres++;
    }

  }

  cout << "\n\nEl programa tiene " << numLineas << " lineas.\n";

  return 0;
  
}

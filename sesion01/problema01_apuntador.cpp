#include <iostream>

/***
 * 
 * Este es el mismo programa que problema01, pero 
 * la busqueda se hace por medio de un apuntador al 
 * inicio del arreglo
 * 
 ***/

using namespace std;

int main() {

  /* Pedimos la dimnesion de nuestra matriz */

  int rows,
    cols;

  cout << "Dame el numero de filas y de columnas" << endl;

  cin >> rows >> cols;

  /* Declaramos la matriz */

  int arr[ rows ][ cols ];

  /* Llenamos el arreglo */

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "Dame el valor para arr[" << i << "][" << j << "]" << endl;
      cin >> arr[i][j];      
    }
  }

  /* Ahora pedimos el valor para buscar */

  cout << "Dame un numero para buscar" << endl;

  int buscar;
  cin >> buscar;

  int *inicioArr;

  inicioArr = &arr[0][0];

  for (int i = 0; i < (rows*cols); i++) {
    
    if (*(inicioArr+i) == buscar) {
      cout << "Se encontro el numero en arr[" << i/cols << "][" << i%rows << "]" << endl;
    }
    
  }
  

  return 0;

}

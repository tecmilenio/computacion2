#include <iostream>

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

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] == buscar)
	cout << "Se encontro el valor en arr[" << i << "][" << j << "]" << endl;
    }
  }  

  return 0;

}

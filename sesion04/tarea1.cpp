#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  const int READ = 10;
  const int WRITE = 11;
  const int LOAD = 20;
  const int STORE = 21;
  const int ADD = 30;
  const int SUBSTRACT = 31;
  const int DIVIDE = 32;
  const int MULTIPLY = 33;
  const int BRANCH = 40;
  const int BRANCHNEG = 41;
  const int BRANCHZERO = 42;
  const int HALT = 43;

  const int tamano = 100;

  int memoria[ tamano ] = { 0 };
  int contador = 0;
  int acumulador;

  cout << "*** Bienvenidos a SIMPLETRON ***\n\n";

  while (true) {
  
    int comando;

    cout << setw(2) << setfill('0') << contador << " ? : ";
    cin >> comando;

    if (comando == -99999)
      break;

    memoria[contador] = comando;
    contador += 1;

  }

  contador = 0;

  int instructionRegister, 
    operationCode,
    operand;


  do {

    instructionRegister = memoria[contador];

    operationCode = instructionRegister/100;
    operand = instructionRegister %100;

    switch(operationCode) {
    case READ:
      cout << "Dame un numero: ";
      cin >> memoria[operand];
      break;
    case WRITE:
      cout << " El contenido es: " << memoria[operand] << "\n";
      break;
    case LOAD:
      acumulador = memoria[operand];
      break;
    case STORE:
      memoria[operand] = acumulador;
      break;
    case ADD:
      acumulador = memoria[operand] + acumulador;
      break;
    case SUBSTRACT:
      acumulador = memoria[operand] - acumulador;
      break;
    case DIVIDE:
      acumulador = memoria[operand] / acumulador;
      break;
    case MULTIPLY:
      acumulador = memoria[operand] * acumulador;
      break;
    case BRANCH:
      contador = operand;
      break;
    case BRANCHZERO:
      if (acumulador == 0)
	contador = operand;
      break;
    case BRANCHNEG:
      if (acumulador < 0)
	contador = operand;
      break;
    }

    contador = contador +1;
    
  } while(operationCode != HALT);

  cout << "\n\n\nMEMORIA\n\n";

  cout << "Acumulador : " << acumulador << "\n";
  cout << "Contador : " << contador << "\n";

  cout << "  " << setfill( ' ');
  for (int i = 0; i < 10; i++)
    cout << setw(6) << i ;
  cout << "\n";

  for (int i = 1; i < 11; i++) {
    cout << setw(2) << i;
    for( int j = 0; j < 10; j++ ) {
      cout << setw(6) << memoria[i*j];
      
    }
    cout << "\n";
  }

  return 0;

}

# include <iostream>
# include <fstream>
#include <conio.h>

using namespace std;

ifstream Entrada;   
int noal;
int matr [4];
   
     
float cal1, cal2,cal3, prom,califacum;

int main() {
  Entrada.open("alumnos.txt");
    
  if (Entrada.fail()){
    cout<< "el archivo no se pudo abrir";
    exit(1); 
  }

  while (Entrada >> cal1 >> cal2 >> cal3 >> matr[0]>>matr[1]>>matr[2]>>matr[3]);

  cout<< "los datos del archivo son:"<<endl;
  cout<< cal1 <<"  "<<cal2<< "  " << cal3<<"   "<< matr[0]<<matr[1]<<matr[2]<<matr[3]<< endl;
  prom= (cal1+cal2+cal3)/3.0;
  cout<<" El promedio es:"<< prom<< endl;
  califacum=prom+califacum;
  cout<< califacum;
  
  
  Entrada.close();
  getch();
  return 0;
 
}
    

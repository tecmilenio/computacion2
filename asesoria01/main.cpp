# include<iostream>
# include"articulo.h"

 using namespace std;
 
 articulo arts[100];
 int contador;
 
 int main(){
 
     int opcion,
         contador = -1;
   
   do {
      
      cout << "Escoge una opcion" << endl;
      cin >> opcion;
      
      switch(opcion) {
                     case 1:
                          int clave; 
                          float precio;
                          contador = contador + 1; 
                          cout << "Dame clave y precion" << endl;
                          cin >> clave >> precio;
                          arts[contador] = articulo(clave, precio);
                          cout << contador << endl;
                          break;
                          
                     case 2:
                          for (int i = 0; i <= contador ; i++) {
                                   int buscaClave;
                                   float nuevoPrecio;
                                   cout << "dame la clave a buscar, y el nuevo precio" << endl;
                                   cin >> buscaClave >> nuevoPrecio;
                                   if (arts[i].getClave() == buscaClave) {
                                      arts[i].setPrecio(nuevoPrecio);
                                      }
                              }
                          
                          break;
                          
                     case 3:
                          cout << contador << endl;
                          for (int i = 0; i <= contador ; i++) {
                              cout << "Art: \t" << arts[i].getClave() << ", precio: \t" << arts[i].getPrecio() << endl;
                              }
                          break;    
                          
                          
                     }
      
      } while (opcion != 4);
      
   return 0;
 
 }
    
     
 
 

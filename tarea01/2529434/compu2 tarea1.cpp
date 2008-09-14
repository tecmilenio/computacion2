#include <iostream>
#include <fstream>
 
 using namespace std;

  ofstream Salida;
   int matricula,contador,ins;
   float calificacion1; 
   float calificacion2; 
   float calificacion3;
   
int main()
{
    
    
          Salida.open("basededatos.txt");
          cout<<"Teclea matricula: "<<endl;
          cin>>matricula;
          Salida<<matricula<<endl;
          cout<<"Teclea 1ra calificacion: "<<endl;
          cin>>calificacion1;
          Salida<<calificacion1<<endl;
          cout<<"Teclea 2da calificacion: "<<endl;
          cin>>calificacion2;
          Salida<<calificacion2<<endl;
          cout<<"Teclea 3ra calificacion: "<<endl;
          cin>>calificacion3;
          Salida<<calificacion3<<endl;
          Salida.close();
          
          cout<<"CORRECTO "<<endl;
          
          cin>>ins;
         
     
       
  
  
  return 0;
}

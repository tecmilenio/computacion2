#include <iostream>
#include <fstream>

using namespace std;
ifstream Entrada;

int matricula;
float calificacion1;
float calificacion2; 
float calificacion3;
int e;



int main()
{
        Entrada.open("basededatos.txt");
        if (Entrada.fail())
           { cout<<"El archivo no se pudo abrir";
             exit(1);
           }
             while (Entrada>>matricula)
             while (Entrada>>calificacion1)
             while (Entrada>>calificacion2)
             while (Entrada>>calificacion3)
        
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"1ra calificacion: "<<calificacion1<<endl;
        cout<<"2da calificacion: "<<calificacion2<<endl;
        cout<<"3ra calificacion: "<<calificacion3<<endl;
        float promedio=(calificacion1+calificacion2+calificacion3)/3;
        cout<<"El promedio del alumno con matricula: "<<matricula<< " es: "<< promedio<<endl;
        Entrada.close();
   cin>>e;
   
   
    
    return 0;
    
}

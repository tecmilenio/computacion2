#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main(){
    
     float matricula, matriculab, matriculac, calif1, calif2, calif3, 
     calif1b, calif2b, calif3b,
     calif1c, calif2c, calif3c,
     promedioa, promediob, promedioc, promediog;
     char nombre [30],nombre2 [30],nombre3 [30];

    cout<< "Ingresa el nombre del alumno numero uno"<<endl;
    cin>>nombre;
    
    cout<< "Ingresa matricula"<<endl;
    cin>>matricula;
    
    cout<< "Ingresa Calificacion 1"<<endl;
    cin>>calif1;
    
     cout<< "Ingresa Calificacion 2"<<endl;
    cin>>calif2;
    
     cout<< "Ingresa Calificacion 3"<<endl;
    cin>>calif3;
    
    cout<< "Ingresa el nombre del alumno numero dos"<<endl;
    cin>>nombre2;
    
    cout<< "Ingresa matricula"<<endl;
    cin>>matriculab;
    
    cout<< "Ingresa Calificacion 1"<<endl;
    cin>>calif1b;
    
     cout<< "Ingresa Calificacion 2"<<endl;
    cin>>calif2b;
    
     cout<< "Ingresa Calificacion 3"<<endl;
    cin>>calif3b;
    
    cout<< "Ingresa el nombre del alumno numero uno"<<endl;
    cin>>nombre3;
    
    cout<< "Ingresa matricula"<<endl;
    cin>>matriculac;
    
    cout<< "Ingresa Calificacion 1"<<endl;
    cin>>calif1c;
    
     cout<< "Ingresa Calificacion 2"<<endl;
    cin>>calif2c;
    
     cout<< "Ingresa Calificacion 3"<<endl;
    cin>>calif3c;
    
    ofstream archivoentrada;
  archivoentrada.open ("matriculas.txt");
  archivoentrada << nombre << "\t" <<matricula <<"\t"<<calif1 <<"\t" << calif2 <<"\t" << calif3<<"\n" 
            << nombre2 << "\t" <<matriculab <<"\t"<<calif1b <<"\t" << calif2b <<"\t" << calif3b<<"\n"
            << nombre3 << "\t" <<matriculac <<"\t"<<calif1c <<"\t" << calif2c <<"\t" << calif3c<<"\n";  
  archivoentrada.close();
    
    
    promedioa =((calif1+calif2+calif3)/3);
    promediob= ((calif1b+calif2b+calif3b)/3);
    promedioc= ((calif1c+calif2c+calif3c)/3);
    promediog= ((promedioa+promediob+promedioc)/3);
    
    cout<< "El alumno con matricula " <<matricula<< "\t" "Tiene un promedio de:"<<promedioa<<"\n" 
           "El alumno con matricula " <<matriculab<< "\t" "Tiene un promedio de:"<<promediob<<"\n"
           "El alumno con matricula " <<matriculac<< "\t" "Tiene un promedio de:"<<promedioc<<"\n";
    
    cout<< "El promedio del grupo es" <<promediog<< endl;
    
    getch();
    
    return 0;
    
    
}

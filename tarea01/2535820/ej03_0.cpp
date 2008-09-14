# include <iostream>
# include <fstream>
#include <conio.h>


using namespace std;

  ofstream Salida;
  ifstream Entrada;
  float PU1,PU2,PU3,Pt1,Pt2,Pt3,Total;
  int cant1,cant2,cant3;
  char str [10]="tornillos";
  char str1 [8]="tuercas";
  char str2[7]="clavos";
  
   int main()
{
    
    Salida.open("factura.txt");  
    cout<< "teclea el precio por unidad de los tornillos"<<endl;
    cin>>PU1 ;
    cout<< "teclea el precio por unidad de las tuercas"<<endl;
    cin>>PU2 ;
    cout<< "teclea el precio por unidad de los clavos"<<endl;
    cin>>PU3 ;
    cout<<"teclea  la cantidad de tornillos"<<endl;
    cin>>cant1 ;
    cout<<"teclea  la cantidad de tuercas"<<endl;
    cin>>cant2 ;  
    cout<<"teclea  la cantidad de clavos"<<endl;
    cin>>cant3 ;
    
    /*PU1= 2.5;
    PU2= 2.0;
    PU3= 0.8;
    cant1=5;
    cant2=10;
    cant3=20; */ 
    
        
    Salida<<PU1<<endl;
    Salida<<PU2<<endl;
    Salida<<PU3<<endl;
    Salida<<cant1<<endl;
    Salida<<cant2<<endl;
    Salida<<cant3<<endl;
    Salida<<str<<endl;
    Salida<<str1<<endl;
    Salida<<str2<<endl;
    
    
    
    cout<<"Tu archivo esta creado"<< endl;
    Salida.close();
    
    /*Entrada.open("factura.txt");
    
    if (Entrada.fail()){
    cout<< "el archivo no se pudo abrir";
    exit(1); 
    }

    Entrada >>PU1  >> PU2 >>PU3>> cant1 >>cant2>>cant3>>str>>str1>>str2;
    cout<< "los datos del archivo son:"<<endl;
    Pt1=cant1*PU1;
    Pt2=cant2*PU2;
    Pt3=cant3*PU3;
    Total=Pt1+Pt2+Pt3;
    cout<< "cantidad     "<< "Descripcion    "<< "Precio unitario"<<"       Precio Total"<<endl;
    cout<< cant1<<"         " <<str <<  "           "<<PU1<<"              "<< Pt1       <<endl;
    cout<<cant2<<"          "<<str1<<"              "<<PU2<<"              "<< Pt2       <<endl;
    cout<<cant3<<"          "<<str2<<"              "<<PU3<<"              "<< Pt3       <<endl;
    cout<< "                                                 Total "              <<endl;
    cout<<"                                                "<<Total                <<endl;         
           
    Entrada.close();
    */
        getch();
         return 0;
     
    
}
    

  
  

#include <iostream>
#include <fstream>
#include <"Articulo.h">
using namespace std;

 ifstream  Entrada;
 ofstream Salida;
 int const tamano_str=40;
 Articulo lista [3];
 int Cantidad,Clave; 
 float PrecioU;  
 float Total=0;
 float precioTotal = 0;
 char Desc[ tamano_str ], yes; 
 int i,k;
 int _canti,_clav,opcion;
 
 int main()
 {     
     
     Entrada.open("articulo.txt");     
     
     if (Entrada.fail()) {   
        cout << "No se pudo abrir el archivo de salida" << endl;   
         exit(1); 
     }
     
    cout<<"1.Ver lista de articulos"<<endl;
    cout<<"2.hacer Factura"<<endl;
    cout<<"3.Ver total de ventas"<<endl;
    cout<<"4.Terminar"<<endl;
    cout<<"opcion";
    cin>>opcion;
 
    
    switch(opcion){
    
    case 2:
    
    ++k;
    cout<< "factura numero"<<k<<endl;
    cout<< "Clave "<<" Cantidad"<<" Descripcion "<<" PrecioU "<<" Precio"<<endl;
    
    do{
       
    while ( Entrada >>Clave>>Cantidad>>Desc>>PrecioU){
        
          
          lista[i].setClave(Clave);
          lista[i].setDesc(Desc);
          lista[i].setCantidad(Cantidad);
          lista[i].setPrecioU(PrecioU);     
                    
     i++;
         
      cout<<"Clave"<<endl;
      cin>>_clav;     
      lista[i].setClave(_clav); 
      if (_clav != Clave)
      cout<<"esa clave no existe"<<endl;
                  
      cout<< "cantidad"<<endl;
      cin>> _canti;
      lista[i].setCantidad(_canti);
      lista[i].disminuyeCant(_canti);
      if( _canti<=Cantidad)
          Cantidad =_canti;
      else 
        cout<<"No hay suficiente de ese articulo"<<endl;             
               
      precioTotal= lista[i].CalcPrecioT();
      Total+=precioTotal;   
            
    
    cout<<Clave<<Cantidad<<Desc<<PrecioU<<precioTotal<<endl;
    cout<<"otro articulo";
    cin>>yes;
     
     }
     
    
    
    
            
    }while(yes!= 'n');
    cout<< "El total de la factura es"<<Total<<endl;
    Salida.open("articulo.txt");
    cout<<Clave<<Cantidad<<PrecioU<<endl;
    Salida.close();  
    Entrada.close();
    break;    
   
              }   
   
        
        return 0;
}
        
           
           
           
           
         
     
     
     
           
     
    
     

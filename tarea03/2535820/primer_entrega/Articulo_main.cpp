#include <iostream>
#include <fstream>
#include <"Articulo.h">
using namespace std;

 ifstream  Entrada;
 ofstream Salida;
 int const tamano_str=40;
 Articulo lista [3];
 int cantidad,clave; 
 float precioU;  
 float Total=0;
 float precioTotal = 0;
 char desc[ tamano_str ], yes; 
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
       
    while ( Entrada >>clave>>cantidad>>desc>>precioU){
        
          
          lista[i].setClave(clave);
          lista[i].setDesc(desc);
          lista[i].setCantidad(cantidad);
          lista[i].setPrecioU(precioU);     
                    
     i++;
     }
     k++;
    cout<< "factura numero"<<k<<endl;
    
    do{
    for (i=0;i<3;i++){
     
      cout<<"Clave"<<endl;
      cin>>_clav;     
      lista[i].setClave(_clav);    
                  
      cout<< "cantidad"<<endl;
      cin>> _canti;
      lista[i].setCantidad(_canti);
      lista[i].disminuyeCant(_canti);
         
     }             
                
    for (i=0;i<3;i++){
           
    precioTotal= lista[i].CalcPrecioT();
    Total+=precioTotal;
    cout<<clave<<cantidad<<desc<<precioU<<precioTotal<<endl;           
     }
    cout<<"otro articulo";
    cin>>yes;
            
    }while(yes!= 'n');
    cout<< "El total de la factura es"<<Total<<endl;
    Salida.open("articulo.txt");
    cout<<clave<<cantidad<<precioU<<endl;
    Salida.close();  
    Entrada.close();
    break;    
   
              }   
   
        
        return 0;
}
        
           
           
           
           
         
     
     
     
           
     
    
     

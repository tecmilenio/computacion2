# include <iostream>
# include <fstream>
//#include <conio.h>

   using namespace std;
   /*ifstream Entrada; */
   ofstream Salida;
   int noal, i;
   int matr [4]={0}; 
   
   /*int i=0;*/
   float cal1, cal2,cal3;
     
   int main()
{
    
    Salida.open("alumnos.txt");
                        
    
    cout<<"Teclea el numero de alumnos";
    cin>> noal;
    
   do{
    cout<< "dame la matricula ";
    cin>> matr[0];
    cin>> matr[1];
    cin>> matr[2];
    cin>> matr[3];
    cout<<" dame la calificacion 1 ";
    cin>> cal1;
    cout<< " dame la calificacion 2 ";
    cin>> cal2;
    cout<< " dame la calificacion 3 ";
    cin>> cal3;
    
    Salida << cal1<<endl;
    Salida<<cal2<<endl;
    Salida<<cal3<<endl;
    Salida<<matr[0]<<endl;
    Salida<<matr[1]<<endl;
    Salida<<matr[2]<<endl;
    Salida<<matr[3]<<endl;
    i++;
              }while(i<noal);
          
    
    
       
         cout<<"Tu archivo esta creado"<< endl;
         Salida.close();
         
        /* Entrada.open("alumnos.txt");
    
    if (Entrada.fail()){
    cout<< "el archivo no se pudo abrir";
    exit(1); 
    }

    Entrada >> cal1 >> cal2 >> cal3>> matr  ;
    cout<< "los datos del archivo son:"<<endl;
    cout<< cal1 <<"  "<<cal2<< "  " << cal3<<" "<<matr<< endl;
    prom= (cal1+cal2+cal3)/3;
    cout<<" El promedio es:"<< prom<< endl;
    
    
    Entrada.close();
         */
         
	 //         getch();
         return 0;
}   
    
    
    
    
   

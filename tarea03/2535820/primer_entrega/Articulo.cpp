#include "Articulo.h"

Articulo::Articulo()
{
	setCantidad(0);
	setPrecioU(0);
	setDesc(0);
}
Articulo::Articulo(char* __desc ,float __precioU,int __cantidad )
{
	setDesc(__desc);
	setCantidad(__cantidad);
	setPrecioU(__precioU);
}

int Articulo :: getCantidad()
{
	return Cantidad;
}

float Articulo ::  getPrecioU()
{
	return PrecioU;
}

char* Articulo :: getDesc()
{
	return Desc;
}

int Articulo ::  getClave()
{
	return Clave;
}

void Articulo:: setClave(int __clave)
{
	if(__clave >0)
	
		Clave=__clave;
	else
		Clave= 0;
		
}

void Articulo:: setPrecioU(float __precioU)
{
	if(__precioU >0)
	
		PrecioU=__precioU;
	else
		PrecioU= 0;
}
void Articulo :: setDesc(char* __desc)
{
	*Desc= *__desc;
}

void Articulo :: setCantidad(int __cantidad)
{	
	if(__cantidad >0)
	
		Cantidad=__cantidad;
	else
		Cantidad = 0;
		
		
}
float Articulo:: CalcPrecioT()
{  
      return Cantidad*PrecioU;
}

int Articulo :: disminuyeCant(int canti)
{

    if (Cantidad-canti > 0)
    Cantidad=Cantidad-canti;
    else
    Cantidad=0;
}    

    
int Articulo :: aumentaCant(int canti)  
{
    return Cantidad + canti;
} 
    

//*void Articulo ::  aumentaCant(int)




//*int Articulo :: disminuyeCant(int)
//*{
//*    if((asa-cantidad)< 0)
    

	

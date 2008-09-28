#include "articulo.h"

articulo::articulo (){
  setClave(0);
  setPrecio(0);
}   
articulo::articulo(int _clave, float _precio){
  setClave(_clave);
  setPrecio(_precio);
}
int articulo::getClave(){
  return Clave;
}
float articulo::getPrecio(){
  return Precio;
}
void articulo::setClave(int _clave){
  if(Clave-_clave>0)
    Clave=_clave;    
  else   
    Clave = 0;
}
void articulo::setPrecio(float _precio){
  if(Precio-_precio>0)
    Precio=_precio;
  else
    Precio= 0;
}


#include "rectangulo.h"

void Rectangulo::Inicializa(float an, float la) {

  setAncho(an);
  setLargo(la);

}

float Rectangulo::CalcArea() {
  
  return ancho * largo;

}

/* Constructores */
Rectangulo::Rectangulo() {
  Inicializa(0,0);
}

Rectangulo::Rectangulo(float an, float la) {
  Inicializa(an, la);
}


/* Mutadores */
void Rectangulo::setAncho(float an) {
  if (an > 0)
    ancho = an;
  else
    ancho = 0;
}

void Rectangulo::setLargo(float la) {
  if (la > 0)
    largo = la;
  else
    largo = 0;
}

float Rectangulo::getAncho() {
  return ancho;
}

float Rectangulo::getLargo() {
  return largo;
}

#include <cmath> // Incluimos las funciones sin, cos, tan 
                 // (notar que estas funcionan con radianes)
#include "rectangulo2.h"

void Rectangulo::Inicializa(float an, float la) {

  setAncho(an);
  setLargo(la);

}

float Rectangulo::CalcArea() {
  
  return getAncho() * getLargo();

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
  /***
   *
   * Internamente, esta clase utiliza hipotenusa y 
   * theta para guardar los valores... Así que tenemos
   * que convertir el ancho y el largo utilizando
   * funciones trigonometricas 
   *
   ***/
  if (an > 0) {
    theta = std::atan( getLargo()/ an );
    hipotenusa = an / std::cos(theta);
  } else {
    hipotenusa = getLargo();
    theta = 3.14159 / 2;
  }
}

void Rectangulo::setLargo(float la) {
  if (la > 0) {
    theta = std::atan( la /getAncho() );
    hipotenusa = la / std::sin(theta);
  } else {
    hipotenusa = getAncho();
    theta = 0;
  }
}

float Rectangulo::getAncho() {
  return hipotenusa * std::cos(theta);
}

float Rectangulo::getLargo() {
  return hipotenusa * std::sin(theta);
}

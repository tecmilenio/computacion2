
class Rectangulo {

 public:
  void Inicializa(float, float);
  float CalcArea();

  /* Constructores */
  Rectangulo();
  Rectangulo(float, float);

  /* Mutadores */
  void setAncho(float);
  void setLargo(float);
  float getAncho();
  float getLargo();

 private:
  /***
   *
   * CO es el largo
   * CA es el ancho
   *
   ***/
  double hipotenusa, theta;

};

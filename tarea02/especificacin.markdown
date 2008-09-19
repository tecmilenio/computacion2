Tarea 02
========

Se implementara la clase "_Matriz_", la cual consistira de los siguientes metodos

Para entregarse Jueve 25 de Septiembre.

### matriz.h:

    class Mtx {
    private: 
      int nrows;                                   // Numero de filas en la matriz
      int ncols;                                   // Numero de columnas en la matriz
      double** ets;                                // Entradas de la matriz 
      	       					   // (notar que es un apuntador a apuntador)
    public: 
      Mtx(int n, int m, double**);                 // constructor para una matriz nxm
      Mtx(int n, int m, double d = 0);             // constructor para una matriz en la que 
      	      	     	       	   		   // todos los valores son iguales
      Mtx(const Mtx &);                            // Constructor de copia
      ~Mtx();                                      // Destructor
    
      Mtx& operator=(const Mtx&);                  // sobrecarga de operador =
      Mtx& operator+=(const Mtx&);                 // sobrecarga de operados +=
      Mtx& operator-=(const Mtx&);                 // sobrecarga de operados -=
      // Vtr operator*(const Vtr&) const;          // Multiplicacion de matriz con vector
      	     		     	   		   // Queda pendiente
      double* operator[](int i) const { return ets[i]; }
      	      		     	      	           // Sobrecarga del operador[]
      
      Mtx& operator+();                            // unario +, ej, mat1 = + mat2
      Mtx operator+(const Mtx&);                   // binario +, ej, m = m1 + m2
      Mtx operator-(const Mtx&);                   // unario -, ej, m1 = -m2
      Mtx operator-(const Mtx&,const Mtx&);    	   // binario -, ej, m = m1 - m2
    
      // Algoritmo QR. (buscar en internet para hacer la implementación)
      int QRdecomp(Mtx& Q, Mtx& R);
      int QRdecomp_slow(Mtx& Q, Mtx& R);

      // Puntos extras
      int rows() const {return nrows;}
      int cols() const {return ncols;}
      void getcol(int i, Vtr& vec) const;
      void setcol(int i, const Vtr& vec);
      void clear();
      int transpose(Mtx& dest) const;
      Mtx operator*(const Mtx&) const; 
      friend Vtr operator*(const Vtr&, const Mtx&);    
      const double& operator()(int i, int j) const {return ets[i][j];}
      double& operator()(int i, int j) {return ets[i][j];}
      friend std::ostream& operator<<(std::ostream&, const Mtx&);	
    
    };

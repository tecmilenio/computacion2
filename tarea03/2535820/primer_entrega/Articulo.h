class Articulo
{
	public:
		Articulo ();
		Articulo(char*,float,int);
		void setPrecioU(float);
		void setDesc(char*);
		void setCantidad(int);
		void setClave(int);

		int getCantidad();
		float getPrecioU();
		char* getDesc();
		int getClave();
		float CalcPrecioT();
		int disminuyeCant(int);
		int aumentaCant(int);
		
		       		
		//*void aumentaCant(int);
		//*void disminuyeCant(int);

	private:
		char Desc[40];
		int Cantidad;
		float PrecioU;
		int Clave;
};

all: rectangulo1 rectangulo2 rectangulo3

rectangulo1: rectangulo.o
	g++ rectangulo.o rectangulo_main.cpp -o rectangulo1.exe

rectangulo2: rectangulo.o
	g++ rectangulo.o rectangulo_main2.cpp -o rectangulo2.exe

rectangulo3: rectangulo.o
	g++ rectangulo.o rectangulo_main3.cpp -o rectangulo3.exe

rectangulo.o: rectangulo2.cpp
	g++ -c rectangulo2.cpp

clean:
	rm -rf *o *exe
	

#include <iostream>

using namespace std;

int suma(int *, int *);

int main() {

  int a = 2,
    b = 3;

  int c;
  c = suma(&a,&b);

  cout << "a vale: " << a << endl;
  cout << "b vale: " << b << endl;
  cout << "c vale: " << c << endl;


  return 0;

}

int suma(int *a, int *b) {

  int c = *a+*b;
  *a = *a*2;
  *b = *b*4;

  return c;

}

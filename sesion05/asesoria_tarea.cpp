#include <iostream>

using namespace std;

int main() {

  int *n, p;

  n = &p;

  *n = 10;

  cout << "*n: " << *n << "\n"
       << "&n: " << &n << "\n"
       << "n: " << n << "\n"
       << "&p: " << &p << "\n"
       << "p: " << p << "\n";

}

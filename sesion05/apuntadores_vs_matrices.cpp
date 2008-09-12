#include <iostream>

using namespace std;

int main() {

  int a[4] = { 15,367,13,74 };

  int *p;

  p = &a[0];

  cout << "*p: " << *p << "\n";

  p = p+1;
  cout << "*p: " << *(p+1) << "\n";

  p = p+1;
  cout << "*p: " << *p << "\n";

  p = p+1;
  cout << "*p: " << *p << "\n";

  return 0;

}

#include <new>

int main() {

  int *p;

  p = new int(12);

  delete p;

  p = new int(14);

  delete p;

}

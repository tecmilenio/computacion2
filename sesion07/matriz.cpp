#include <iostream>

using namespace std;

void elempordos(int [][2]);

int main() {

  int arr[2][2];

  cin >> arr[0][0]
      >> arr[0][1]
      >> arr[1][0]
      >> arr[1][1];

  elempordos(arr);

  cout << arr[0][0] << " " 
       << arr[0][1] << " "
       << arr[1][0] << " "
       << arr[1][1] << endl;

}

void elempordos(int arr[][2]) {

  arr[0][0] = arr[0][0] * 2;
  arr[0][1] = arr[0][1] * 2;
  arr[1][0] = arr[1][0] * 2;
  arr[1][1] = arr[1][1] * 2;

}

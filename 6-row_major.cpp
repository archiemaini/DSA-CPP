#include <iostream>
using namespace std;

int main() {
  // Row Major
  int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
  int* base = &arr[0][0];
  int rows = 2, cols = 3;

  cout << "Row Major Order address calculation:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "Address of arr[" << i << "][" << j << "] : "
           << (base + (i * cols + j)) << endl;
    }
  }

  return 0;
}
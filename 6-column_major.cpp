#include <iostream>
using namespace std;

int main() {
  // Column Major Simulation
  int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
  int* base = &arr[0][0];
  int rows = 2, cols = 3;

  cout << "Column Major Order address calculation:\n";
  for (int j = 0; j < cols; ++j) {
    for (int i = 0; i < rows; ++i) {
      cout << "Address of arr[" << i << "][" << j << "] : "
           << (base + (j * rows + i)) << endl;
    }
  }

  return 0;
}
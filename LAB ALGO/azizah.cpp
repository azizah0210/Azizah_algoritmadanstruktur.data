#include <iostream>
using namespace std;

int main() {
  int r, c, a[100][100], b[100][100], result[100][100], i, j, k;

  cout << "Enter the number of rows: ";
  cin >> r;

  cout << "Enter the number of columns: ";
  cin >> c;

  cout << endl << "Enter elements of matrix A: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Enter element a" << i + 1 << j + 1 << ": ";
      cin >> a[i][j];
    }

  cout << endl << "Enter elements of matrix B: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Enter element b" << i + 1 << j + 1 << ": ";
      cin >> b[i][j];
    }

  // Multiplying matrices
  for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
      cout << "Enter element a" << i + 1 << j + 1 << ": ";
      cin >> a[i][j];
    }

  cout << endl << "Enter elements of matrix B: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Enter element b" << i + 1 << j + 1 << ": ";
      cin >> b[i][j];
    }

  // Multiplying matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      result[i][j] = 0;
      for (k = 0; k < c; ++k) {
        result[i][j] += a[i][k] * b[k][j];
      }
    }

  // Displaying the resultant matrix
  cout << endl << "Output Matrix: " << endl;
  for (i = 0; i < r; ++i) {
    for (j = 0; j < c; ++j) {
      cout << result[i][j] << "  ";
    }
    cout << endl; 
  return 0;
}

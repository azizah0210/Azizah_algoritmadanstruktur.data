#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Penambahan Matriks 2x2  ##" << endl;
  cout << "==========================================" << endl;
  cout << endl;
 
  int matriksA[2][2], matriksB[2][2], i, j;
 
  // proses input elemen matriksA
  cout << "  Input Matriks A  "<< endl;
  cout << "-------------------"<< endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriksA[i][j];
    }
  }
  cout << endl;
 
  // proses input elemen matriksB
  cout << "  Input Matriks B  "<< endl;
  cout << "-------------------"<< endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriksB[i][j];
    }
  }
  cout << endl;
 
  // tampilkan elemen matriksA
  cout << "Matriks A: " << endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << setw(3) << matriksA[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
 
  // tampilkan elemen matriksA
  cout << "Matriks B: " << endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << setw(3) << matriksB[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
 
  // hasil penambahan matriksA + matriksB
  cout << "Matriks A + Matriks B: " << endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << setw(3) << matriksA[i][j] + matriksB[i][j]<< " ";
    }
    cout << endl;
  }
 
  return 0;
}

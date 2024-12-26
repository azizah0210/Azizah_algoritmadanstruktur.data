#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int matriksA[2][2], matriksB[2][2], i, j;

    //proses input elemen matriksA
    cout << "masukkan elemen matriks A : " << endl;
    cout << "----------------------------" << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << " baris " <<i+1 << ", kolom " <<j+1 << " = ";
            cin >> matriksA[i][j];
        }

    }
    cout << endl;

      //proses input elemen matriksB
    cout << "masukkan elemen matriks B : " << endl;
    cout << "----------------------------" << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << "baris" <<i+1<< ", kolom" <<j+1<< " = ";
            cin >> matriksB[i][j];
        }

    }
    cout << endl;

    //tampilan elemen matriksA
    cout << "matriks A = " << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << setw(3) << matriksA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

     //tampilan elemen matriksB
    cout << "matriks B = " << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << setw(3) << matriksA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //hasil penambahan matriksA + matriksB
    cout << "hasil penambahan matriks A + matriks B = " << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << setw(3) << matriksA[i][j] + matriksB[i][j] << " ";
        }
        cout << endl;
    }
    
     //hasil pengurangan matriksA - matriksB
    cout << "hasil pengurangan matriks A - matriks B = " << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << setw(3) << matriksA[i][j] - matriksB[i][j] << " ";
        }
        cout << endl;
    }

     //hasil perkalian matriksA * matriksB
    cout << "hasil perkalian matriks A * matriks B = " << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << setw(3) << matriksA[i][j] * matriksB[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

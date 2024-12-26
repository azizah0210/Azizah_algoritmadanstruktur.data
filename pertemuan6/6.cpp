#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main ()
{
	char a1 [20];
	char a2 [20];
	cout << "Masukan Kata - 1 = ";
	cin >>a1;
	cout << "MAsukan Kata - 2 = ";
	cin >> a2;
	
	strcat(a1, a2); //menambahkan string, sumber ke bagian akhir dr string tujuan
	cout<< "Hasil Penggabungan = " << a1;
	getchar();
}

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char huruf [20];
	char pindah[20];
	//clrscr();
	
	cout<< "Masukan Sembarang Kata = ";
	cin >> huruf;
	
	//manggil dan disebut ulang
	//huruf menjadi pindah
	/* proses */
	strcpy(pindah, huruf);
	cout<<"Pemindahannya = "<<pindah;
	
	getchar();
}

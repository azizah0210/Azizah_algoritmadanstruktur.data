#include <iostream> //Necessary header file = standard input and output stream library
using namespace std; //memungkinkan tanpa harus mengawalinya dengan ?std::?.

int main () //menyatakan awal dari program inti c++ yang akan di output
{
	int hasil[3][3]; //bentuk umum array -- 3 = baris dan 3 = kolom
	
	//looping untuk menginput nilai hasil penjualan
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
			cout<<"Data "<<a<<" - "<<b<<" =";
			cout<<"\nJumlah Penjumlahan = ";
			cin>>hasil[a][b];
		}
	}
	
	cout<<"\nHASIL PENJUALAN BARANG";
	cout<<"\n================================";
	cout<<"\n2001 | 2002 | 2003 |";
	cout<<"\n================================";
	cout<<endl;
	
	//looping untuk mengeluarkan nilai indeks array
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
			cout<<hasil[a][b]<<"  |\t";
		}
		cout<<endl;
	}
	
	return 0;
}


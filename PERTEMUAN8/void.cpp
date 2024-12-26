#include <iostream>
using namespace std;

void siswa ()
{
	string nama = "Jomblo";
	string jk = "laki-laki";
	cout << nama << " adalah seorang " << jk << endl;	
}

string siswi ()
{
	string nama = "Annisa";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main ()
{
	siswa(); //fungsi void tidak memerlukan 'cout'
	cout<< siswi() << endl; //fungsi non-void mengembalikan nilai, maka butuh 'cout'
}

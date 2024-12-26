#include <iostream>
using namespace std;

void siswa()
{
	string nama = "zakaria";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string siswi()
{
	string nama = "azizah";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

 int main()
 {
 	siswa(); //Fungsi void tidak memerlukan 'cout'
 	cout << siswi() << endl; //Fungsi non-void mengembalikan nilai, maka butuh 'cout'
 }

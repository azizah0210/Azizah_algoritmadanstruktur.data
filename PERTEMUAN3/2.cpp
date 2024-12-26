#include <iostream>
using namespace std;

int main ()
{
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "masukan bilangan kesatu : ";
	cin >> x;
	cout << "masukan bilangan kedua : ";
	cin >> y;
	
	tambah = x + y ;
	kurang = x - y;
	kali = x * y ;
	bagi = x / y ;
	
	cout << "============================" << endl;
	cout << "hasil penjumlahan : " << tambah << endl;
	cout << "hasil pengurangan : " << kurang << endl;
	cout << "hasil perkalian : " << kali << endl;
	cout << "hasil pembagaian : " << bagi <<endl;
	
	return 0;
	
}

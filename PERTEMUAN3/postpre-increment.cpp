#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	// Post-increment (a++): variabel 'a' digunakan dulu, baru ditambah 1
	int b = a++;  // b = 5, a = 6
	
	cout << "Post-increment:" << endl;
	cout << "Nilai a setelah a++: " << a << endl; // a sekarang 6
	cout << "Nilai b: " << b << endl; // b mengambil nilai sebelum a ditambah, jadi b = 5
	
	int c = 6;
	
	// Post-increment (++c): variabel 'c' digunakan dulu, baru ditambah 
	int d = ++c;
	
	cout << "\nPre-increment:" << endl;
	cout << "Nilai c setelah c++: " << c << endl; // c sekarang 6
	cout << "Nilai d: " << d << endl; // d mengambil nilai sebelum a ditambah, jadi d = 6
	
	return 0;
}

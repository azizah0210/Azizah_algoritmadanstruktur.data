#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	int b = a++; 
	
	cout << "Post-increment:" << endl;
	cout << "Nilai a setelah a++: " << a << endl;
	cout << "Nilai b: " << b << endl;
	
	int c = 6;
	
	int d = ++c;
	
	cout << "\nPre-increment:" << endl;
	cout << "Nilai c setelah c++: " << c << endl;
	cout << "Nilai d: " << d << endl; 
	
	return 0;
}

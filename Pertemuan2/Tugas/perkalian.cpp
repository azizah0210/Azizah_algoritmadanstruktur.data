#include <iostream>
using  namespace std;

int pertambahan()
{
	float a,b, c;
	
	cout << "A = ";
	cin >> a;
	
	cout << "B = ";
	cin >> b;
		
		c = a + b;
		
		cout << "A + B = " << c << endl;
		
		return 0;
		
}

int perkalian() {

float a,b, c;
	
	cout << "A = ";
	cin >> a;
	
	cout << "B = ";
	cin >> b;
		
		c = a * b;
		
		cout << "A * B = " << c << endl;
		
		return 0;
}

int pengurangan () {

float a,b, c;
	
	cout << "A = ";
	cin >> a;
	
	cout << "B = ";
	cin >> b;
		
		c = a - b;
		
		cout << "A - B = " << c << endl;
		
		return 0;
}


int main()
{
//	pertambahan();
//	perkalian();
	pengurangan();
}

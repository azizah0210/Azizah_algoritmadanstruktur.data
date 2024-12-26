#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int jari_l, jari_t, tinggi_t;
	const float pi = 3.14286;
	
	
	cout<< "input nilai jari-jari lingkaran = ";
	cin >> jari_l;
	cout<< "\ninpiut nilai jari-jari tabung = ";
	cin >>jari_t;
	cout<<"\ninput nilai tinggi tabung = ";
	cin >>tinggi_t;
	
	int rumus_l = pi*(jari_l*jari_l);
	int rumus_t = pi*(jari_t * jari_t)*tinggi_t;
	
	cout <<"\nluas lingkaran : " <<endl;
	cout << "jari-jari = " <<jari_l <<endl;
	cout << "pi        = " <<pi <<endl;
	cout << "Luas      = pi x r x r" <<endl;
	cout << "Luas      = " <<pi << " x " << jari_l << jari_l << endl;
	cout << "Luas      = " << rumus_l << "cm" <<endl<<endl;
	cout << "Luas lingkaran dengan jari-jari " <<jari_l << "cm adalah = " << rumus_l << "cm";
	cout << "\n";
	
	cout << "\luas tabung dan tinggi tabung: " <<endl;
	cout << "jari-jari = " <<jari_t <<endl;
	cout << "pi        = " <<pi <<endl;
	cout << "tinggi    = " <<tinggi_t <<endl;
    cout << "Volume    = pi x r x r x tinggi_t" <<endl;
    cout << "Volume    = " << pi << " x " << jari_t << " x " << jari_t << " x "<< tinggi_t << endl;
	cout << "Volume    = " << rumus_t << "cm" <<endl<<endl;
	cout << "Volume tabung dengan jari-jari " <<jari_t << "cm dan tinggi" <<tinggi_t << "cm adalah = " << rumus_t << " cm ";
	
	
}

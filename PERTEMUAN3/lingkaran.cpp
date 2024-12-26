#include <iostream>
#define phi 3.14152965
using namespace std;

int main()
{
    float jari_jari,tinggi,volume,luas;
	cout <<"Dik : jari jari lingakaran adalah 14" << endl;
	cout <<"Masukkan jari jari lingkaran : ";
	cin >> jari_jari; // jari jari nya 14
	cout << "Dik : tinggi tabung adalah 14" << endl;
	cout << "Masukan tinggi tabung : ";
	cin >> tinggi; // tinggi 14
	
	volume=phi*jari_jari*jari_jari*tinggi; // phinya diambil dari #define dikalikan dengan R kuadrat dikali dengan tinggi
	luas=2*phi*jari_jari*jari_jari; // phinya diambil dari #define dikalikan dengan R kuadrat
	
	cout<<"Luas lingkaran = "<< volume <<endl;
	cout<<"Volume tabung = "<< luas<<endl; 
	
	
}

#include <iostream>
using namespace std;
int main()
{
    char kode;
    //clrscr;
    cout<<"Masukan kode Barang [A..C] = ";
    cin>>kode;
    
    switch(kode){
    	case 'A':
    	cout<<"Alat Olahraga";
    	break;
    	case 'B':
    	cout<<"Alat Elektronik";
    	break;
    	cout<< "Alat Masak";
    	break;
    	default:
    	cout<< "Anda Salah Memasukan Kode";
     	break; 	
	}
	getchar();
}

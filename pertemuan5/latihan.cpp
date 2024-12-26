#include <iostream>
using namespace std;

int main(){
	
	int n,a,z=0,x=1,f=0;
	cout<<"Masukan Panjang Deret = ";
	cin>>n;
	cout<<endl;
	
	for(a=1; a<=n; ++a){
		if(a == 1){
			cout<<z<<" ";
			continue;
		}
		if (a == 2){
            cout<<x<<" ";
            continue;
		}
		f = z + x;
        z = x;
        x = f;
        
        cout<<f<<" ";
	}
return 0;
}

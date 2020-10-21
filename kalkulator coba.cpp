#include <iostream>
using namespace std;
int main(){
	float a, b;
	char operasi;
	cout<<"masukan nilai pertama : ";
	cin>>a;
	cout<<"masukan operasi hitung : ";
	cin>>operasi;
	switch (operasi){
		case '+' : 
		cout<<"masukan nilai kedua : ";
		cin>>b;
		cout<<"hasil penjumlahan : "<<a+b; break;
		case '-' :
			cout<<"masukan nilai kedua : ";
			cin>>b;
			cout<<"hasil pengurangan : "<<a-b; break;
			case '*' :
				cout<<"masukan nilai kedua : ";
				cin>>b;
				cout<<"hasil perkalian : "<<a*b; break;
				case '/' :
					cout<<"masukan nilai kedua : ";
					cin>>b;
					cout<<"hasil pepembagian : "<<a/b; break;
	}
} 

#include<iostream>
using namespace std;
void addition(){
	int ans1, ans2, ans3, point=0;
	cout<<"1. 3+4 = ";
	cin>>ans1;
	if(ans1 == 7){
		cout<<"correct"<<endl;
		point++;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<"2. 5+8 = ";
	cin>>ans2;
	if(ans2 == 13){
		cout<<"correct"<<endl;
		point++;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<"1. 2+6 = ";
	cin>>ans3;
	if(ans3 == 8){
		cout<<"correct"<<endl;
		point++;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<"Congratulation, your point = "<<point;
}
void subtraction(){
	int ans1, ans2, ans3, point=0;
	cout<<"1. 5-2 = ";
	cin>>ans1;
	if(ans1 == 3){
		cout<<"correct"<<endl;
		point++;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<"2. 9-7 = ";
	cin>>ans2;
	if(ans2 == 2){
		cout<<"correct"<<endl;
		point++;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<"1. 7-1 = ";
	cin>>ans3;
	if(ans3 == 6){
		cout<<"correct"<<endl;
		point++;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<"Congratulation, your point = "<<point;
}
int main(){
	int type;
	cout<<"1 fpr addition, 2 for subtraction";
	cin>>type;
	if (type ==1){
		addition();
	}
	else if (type ==2){
		subtraction();
	}
	else {
		cout<<"Wrong";
	}
}

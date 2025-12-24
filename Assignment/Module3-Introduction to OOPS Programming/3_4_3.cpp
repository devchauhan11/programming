#include<iostream>
using namespace std;
int g=5;
void func1(){
	int l=3;
	cout<<"local variable: "<<l<<endl;
	cout<<"global variable: "<<g<<endl;
}
main(){
	func1();
	cout<<"local variable: "<<l<<endl;	//gives error
	int l=7;
	cout<<"local variable: "<<l<<endl;
	cout<<"global variable: "<<g<<endl;
}
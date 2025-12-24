#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int d(int a, int b){
	return a/b;
}
main(){
	int a,b;
	char o;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter operation: ";
	cin>>o;
	switch(o){
		case '+':
			cout<<add(a,b)<<endl;
			break;
		case '-':
			cout<<sub(a,b)<<endl;
			break;
		case '*':
			cout<<mul(a,b)<<endl;
			break;
		case '/':
			cout<<d(a,b)<<endl;
			break;
	}
}
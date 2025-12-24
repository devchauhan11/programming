#include<iostream>
using namespace std;
int f(int n){
	if(n==1){
		return 1;
	}
	else{
		return (n*f(n-1));
	}
}
main(){
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<n<<"! = "<<f(n);
}
#include<iostream>
using namespace std;
main(){
	int a[5], i, s=0;
	for(i=0;i<5;i++){
		cout<<"Enter "<<i<<"th element: ";
		cin>>a[i];
		s+=a[i];
	}
	cout<<"sum = "<<s<<endl;
	cout<<"average = "<<s/5<<endl;
}
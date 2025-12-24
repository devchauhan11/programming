#include<iostream>
using namespace std;
int recarea(int l, int b){
	return l*b;
}
main(){
	int l, b;
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter breadth: ";
	cin>>b;
	cout<<"Rectangle area = "<<recarea(l,b)<<endl;
}
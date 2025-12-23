#include<iostream>
using namespace std;
class recarea{
	public:
		int l, b;
		recarea(){
			cout<<"Enter length: ";
			cin>>l;
			cout<<"Enter breadth: ";
			cin>>b;
			cout<<"Area of rectangle = "<<l*b<<endl;
		}
};
main(){
	recarea ra;
}
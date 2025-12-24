#include<iostream>
using namespace std;
main(){
	srand(time(0));
	int g, r=(rand()%100)+1;
	do{
		cout<<"Guess number between 1 and 100: ";
		cin>>g;
		if(g>r){
			cout<<g<<" is too high"<<endl;
		}
		else if(g<r){
			cout<<g<<" is too low"<<endl;
		}
		else{
			cout<<g<<" is the corrent guess"<<endl;
		}
	}
	while(g!=r);
}
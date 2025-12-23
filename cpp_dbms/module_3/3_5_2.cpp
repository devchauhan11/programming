#include<iostream>
using namespace std;
main(){
	int a[2][2], b[2][2], i, j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Enter ["<<i+1<<"]["<<j+1<<"] element of 1st matrix: ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Enter ["<<i+1<<"]["<<j+1<<"] element of 2nd matrix: ";
			cin>>b[i][j];
		}
	}
	cout<<"sum = "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<a[i][j]+b[i][j]<<" ";
		}
		cout<<endl;
	}
}
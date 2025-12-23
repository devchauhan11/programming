#include<iostream>
#include<string>
#include<cmath>
using namespace std;
main(){
	string s;
	cout<<"Enter string: ";
	cin>>s;
	int i, j, l=s.length()-1;
	for(i=0, j=l; i<l, j>=0;i++, j--){
		if(s[i] != s[j]){
			cout<<s<<" is not a palindrome";
			break;
		}
	}
	if(i==l+1){
		cout<<s<<" is a palindrome";
	}
}
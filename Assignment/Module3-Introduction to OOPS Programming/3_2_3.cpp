/*Write a C++ program that demonstrates arithmetic, relational, 
logical, and bitwise operators. Perform operations using each 
type of operator and display the results.*/
#include<iostream>
using namespace std;
main(){
	int a=10, b=5;
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	cout<<a<<" % "<<b<<" = "<<a%b<<endl;
	cout<<"++"<<a<<" = "<<++a<<endl;
	cout<<"--"<<a<<" = "<<--a<<endl;
	cout<<a<<" == "<<b<<" = "<<(a==b)<<endl;
	cout<<a<<" != "<<b<<" = "<<(a!=b)<<endl;
	cout<<a<<" > "<<b<<" = "<<(a>b)<<endl;
	cout<<a<<" < "<<b<<" = "<<(a<b)<<endl;
	cout<<a<<" >= "<<b<<" = "<<(a>=b)<<endl;
	cout<<a<<" <= "<<b<<" = "<<(a<=b)<<endl;
	cout<<a<<" && "<<b<<" = "<<(a&&b)<<endl;
	cout<<a<<" || "<<b<<" = "<<(a||b)<<endl;
	cout<<"!"<<a<<" = "<<!a<<endl;
	cout<<a<<" & "<<b<<" = "<<(a&b)<<endl;
	cout<<a<<" | "<<b<<" = "<<(a|b)<<endl;
	cout<<a<<" ^ "<<b<<" = "<<(a^b)<<endl;
	cout<<a<<" << "<<b<<" = "<<(a<<b)<<endl;
	cout<<a<<" >> "<<b<<" = "<<(a>>b)<<endl;
	cout<<"~"<<a<<" = "<<~a<<endl;
}
#include<iostream>
using namespace std;
class Calculator{
    public:
        int addition(int a, int b){
            return a+b;
        }
        int subtraction(int a, int b){
            return a-b;
        }
        int multiplication(int a, int b){
            return a*b;
        }
        int division(int a, int b){
            return a/b;
        }
};
main(){
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    Calculator o;
    cout<<a<<" + "<<b<<" = "<<o.addition(a,b)<<endl;
    cout<<a<<" - "<<b<<" = "<<o.subtraction(a,b)<<endl;
    cout<<a<<" * "<<b<<" = "<<o.multiplication(a,b)<<endl;
    cout<<a<<" / "<<b<<" = "<<o.division(a,b)<<endl;
}
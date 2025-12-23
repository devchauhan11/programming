#include<iostream>
#include <string>
using namespace std;

main(){
    string name;
    int age;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Hello, "<<name<<". You are "<<age<<" years old.";
}
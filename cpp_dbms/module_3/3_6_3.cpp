#include<iostream>
using namespace std;
class Person{
	public:
		string n;
		int a;
		void inP(string t){
			cout<<"Enter "<<t<<" name: ";
			cin>>n;
			cout<<"Enter "<<t<<" age: ";
			cin>>a;
		}
};
class Student: public Person{
	public:
		int c;
		string t="student's";
		void inS(){
			inP(t);
			cout<<"Enter student's class: ";
			cin>>c;
		}
		void outS(){
			cout<<"Student's name: "<<n<<endl;
			cout<<"Student's age: "<<a<<endl;
			cout<<"Student's class: "<<c<<endl;
		}
};
class Teacher: public Person{
	public:
		string s, t="teacher's";
		void inT(){
			inP(t);
			cout<<"Enter teacher's subject: ";
			cin>>s;
		}
		void outT(){
			cout<<"Teacher's name: "<<n<<endl;
			cout<<"Teacher's age: "<<a<<endl;
			cout<<"Teacher's subject: "<<s<<endl;
		}
};
main(){
	Student o1;
	Teacher o2;
	o1.inS();
	o2.inT();
	o1.outS();
	o2.outT();
}
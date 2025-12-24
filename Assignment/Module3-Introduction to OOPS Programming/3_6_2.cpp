#include<iostream>
using namespace std;
class BankAccount{
	private:
		int balance;
	public:
		void deposit(int b){
			int d;
			cout<<"Enter amount to deposit: ";
			cin>>d;
			balance=b;
			cout<<"Balance after deposit: "<<balance+d<<endl;
		}
		void withdraw(int b){
			int w;
			cout<<"Enter amount to withdraw: ";
			cin>>w;
			balance=b;
			cout<<"Balance after withdraw: "<<balance-w<<endl;
		}
};
main(){
	int b, ch;
	cout<<"Enter current balance: ";
	cin>>b;
	BankAccount o;
	cout<<"1. Deposit"<<endl;
	cout<<"2. Withdraw"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch){
		case 1:
			o.deposit(b);
			break;
		case 2:
			o.withdraw(b);
			break;
		case 3:
			cout<<"Thank you"<<endl;
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
}
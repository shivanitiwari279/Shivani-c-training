#include<iostream>
#include<string>
using namespace std;
class BankAccount {
	public:
		int balance;
		int accNum;
		string name;
		 
		 BankAccount( int b, int a, string n){
	    balance=b;
	    accNum=a;
	    name=n;
		 }
		void deposit(int d){
			balance+=d;
			cout<<" Current Balance is :"<<balance<<endl;
		}
		void withdraw(int w){
			balance-=w;
			cout<<" Current Balance is :"<<balance<<endl;
			
}
		void displayBalance(){
			cout<<"Balance is :"<<balance<<endl;
			cout<<"Account no is :"<<accNum<<endl;
			cout<<"Name is :"<<name<<endl;
			
		}		
};
int main(){
	BankAccount B1(1000 , 10123,"Senorita" );
	B1.deposit(1000);
	B1.withdraw(200);
	B1.displayBalance();
	
	
}
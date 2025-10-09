#include<iostream>
#include<string>
using namespace std;

class Bankaccount{
	int accountnumber;
	int balance;
	public:
		Bankaccount(int acc, int bal){
			accountnumber=acc;
			balance=bal;
		}
		Bankaccount( const Bankaccount &obj){
			balance= obj.balance;
			accountnumber=obj.accountnumber;
		}
		void add_balance(int amt){
			balance+=amt;
		}
		void show(){
			cout<<"\nAccount number is: "<<accountnumber;
			cout<<"\nBalance is: "<<balance;
		}
};

int main(){
	Bankaccount b(101 , 5124);
	b.add_balance(5124);
	Bankaccount b2=b;
	b.show();
	b.add_balance(500);
	b.show();
	}

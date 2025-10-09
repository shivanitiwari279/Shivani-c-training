#include<iostream>
using namespace std;

class Two;

class One {
	int data ;
	public:
		
		void input (int value){
			data=value;
		}
		
		friend void multiply(One,Two);
};

class Two {
	int data ;
	public:
		
		void input (int value){
			data=value;
		}
		
		friend void multiply(One,Two);
};

void multiply (One obj1 , Two obj2)
{
	cout<<"multiply of two object from the defination is :"<<obj1.data*obj2.data<<endl;
	
	
}

int main(){
	One A;
	Two B;
	A.input(20);
	B.input(15);
	multiply(A,B);
}
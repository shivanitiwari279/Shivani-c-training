#include<iostream>
using namespace std;

class Two;

class One {
	int data ;
	public:
		
		void input (int value){
			data=value;
		}
		
		friend void add(One,Two);
};

class Two {
	int data ;
	public:
		
		void input (int value){
			data=value;
		}
		
		friend void add(One,Two);
};

void add (One obj1 , Two obj2)
{
	cout<<"sum of two object from the defination is :"<<obj1.data+obj2.data<<endl;
	
	
}

int main(){
	One A;
	Two B;
	A.input(20);
	B.input(50);
	add(A,B);
}
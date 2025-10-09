#include<iostream>
using namespace std;
class Parent1{
	public:
	void skin ()
	{
		cout<<" Skin colour is brown."<<endl;
	}
};
class Parent2
{
	public:
		void eyes()
		{
			cout<<" Eyes colour is blue."<<endl;
		}
};
class Child : public Parent1, public Parent2
{
	public:
		void result ()
		{
			cout<<"This child looks like."<<endl;
		}
};
 
 int main(){
 	Child c1;
 	c1.result();
 	c1.eyes();
 	c1.skin();
 	return 0;
 }
 
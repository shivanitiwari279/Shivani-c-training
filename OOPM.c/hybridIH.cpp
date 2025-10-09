#include<iostream>
using namespace std;
class Vehicle{
	public:
	Vehicle ()
	{
		cout<<" This is a vehicle."<<endl;
	}
};
class Fare
{
	public:
		Fare()
		{
			cout<<" Fare is a vehicle."<<endl;
		}
};
class Car : public Vehicle
{
	public:
		Car()
		{
			cout<<"This vehicle is a Car."<<endl;
		}
};
class Bus: public Vehicle, public Fare
{
	public:
		Bus()
		{
			cout<<"This vehicle  is a Bus with Fare."<<endl;
		}
};
 
 int main(){
 	Bus  obj2;
 	return 0;
 }
 
// #include<iostream>
// using namespace std;
// class Vehicle{
// 	public:
// 		string brand = "Ford";
// 		void honk(){
// 			cout<<"Tuut, tuut ! \n";
// 		}
// 		};
// 		class Car: public Vehicle {
// 			public:
// 				string model = "Mustang" ;
// 		};
// 		int main(){
// 			Car myCar;
// 			myCar.honk();
// 			cout<<	myCar.brand + " "+ myCar.model ;
// 			return 0;
// 		}




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
 
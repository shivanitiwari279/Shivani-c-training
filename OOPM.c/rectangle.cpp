#include<iostream>
using namespace std;
class Rectangle {
	public:
		int length;
		int breadth;
		
		Rectangle(int l , int b){
			length=l;
		    breadth=b;
		    }
		    
		 void display(){
		 	cout<<"Area of rectangle is :"<<length*breadth<<endl;
		 	cout<<"Perimeter of rectangle is :"<<2*(length+breadth)<<endl;
		 }
	};
	
	int main(){
		Rectangle R1( 12 , 9);
		R1.display();
	}
#include<iostream>
#include<string>
using namespace std;
class Student {
	public:
	string name;
	int rollno;
	float marks;
	Student(string s, int r, float m){
		name=s;
		rollno=r;
		marks=m;
	}
	
};
int main(){
	Student S1("Roy" , 123 , 90.8);
	cout<<S1.name<<" "<<S1.rollno<<" "<<S1.marks<<endl;
}
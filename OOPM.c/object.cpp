#include<iostream>
#include<string>
using namespace std;
class Person
{
   public:
   string name;
   int age;
   int salary;

   Person (string n, int a, int s){
    name = n;
    age = a;
    salary = s;
   }
    void display(){
        cout<<"Name is :"<<name<<endl;
        cout<<"Age is :"<<age<<endl;
        cout<<"Salary is :"<<salary<<endl;
    }
   void change_age(int na){
        age=na;
        cout<<"Now the age is :"<<age<<endl;
   }
   void change_salary(int ns){
         salary=ns;
         cout<<"Now the salary is :"<<salary<<endl;
   }
};

int main(){
    Person P1("Amit", 25 ,2500);
	cout<<  P1.name<<" "<<P1.age<<" "<<P1.salary<<endl;
    P1.display();
    P1.change_age(26);
    P1.change_salary(2700);
   
}
 

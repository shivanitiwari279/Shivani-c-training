#include<iostream>
using namespace std;
class Myfriend
{
   public:
   virtual void Myshoes()=0;
};
class Me: public Myfriend
{
    public:
    void Myshoes() override{
        cout<<"These are my shoes now";
    }
    
};
int main(){
    Me m;
    m.Myshoes();
}


#include<stdio.h>
#include<string.h>
struct address
     {
        int pincode;
     };
     
    struct student
    {
      char name[50];  
      int rollno;
      int age;
      struct address S2;
    };

    int main(){
        struct student S1;
        strcpy(S1.name,"Ruby Roy");
        S1.age=18;
        S1.rollno=12345;
        S1.S2.pincode=482001;
        printf("Name is :%s\n",S1.name);
        printf("Age is :%d\n",S1.age);
        printf("Roll no is :%d\n",S1.rollno);
        printf("Pincode is :%d\n",S1.S2.pincode);
    }
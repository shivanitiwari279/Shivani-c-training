#include<stdio.h>
#include<string.h>
    struct student
    {
      char name[50];  
      int rollno;
      int age;
    };
     
    int main(){
        struct student S1;
        S1.age=18;
        S1.rollno=12345;
        strcpy(S1.name,"Ruby Roy");
        printf("Age is :%d\n",S1.age);
        printf("Roll no is :%d\n",S1.rollno);
        printf("Name is :%s",S1.name);
    }
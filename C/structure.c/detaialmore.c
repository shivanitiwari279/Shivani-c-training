#include<stdio.h>
#include<string.h>
    struct student
    {
      char name[50];  
      int rollno;
      int age;
    };

    int main(){
        struct student S1[3];
        for (int i = 0; i < 3; i++)
        {
            scanf(" %s",S1[i].name);
        }
        for (int i = 0; i < 3; i++)
        {
            printf("Name is :%s\n",S1[i].name);
        }
        struct student S2[3];
        for (int i = 0; i < 3; i++)
        {
            scanf(" %d",&S2[i].age);
        }
        for (int i = 0; i < 3; i++)
        {
            printf("Age is :%d\n",S2[i].age);
        }
        struct student S3[3];
            for (int i = 0; i < 3; i++)
        {
            scanf(" %d",&S3[i].rollno);
        }
        for (int i = 0; i < 3; i++)
        {
            printf("Roll no is :%d\n",S3[i].rollno);
        }

        }
        
    
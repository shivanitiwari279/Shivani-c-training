// #include<stdio.h>
// int main(){
//     int arr[2][2]={{1,2},{3,4}};
//     int brr[2][2]={{5,6},{7,8}};
//     int crr[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//        for (int j = 0; j < 2; j++)
//        {
//         crr[i][j]=arr[i][j]+brr[i][j];
//         printf("%d ",crr[i][j]);
//        }
//        printf("\n");
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int arr[2][2]={{1,2},{3,4}};
//     int sum=0;
//     for (int i = 0; i < 2; i++)
//     {
//        for (int j = 0; j < 2; j++)
//        {
//         sum= sum+arr[i][j];
        
//        }
      
//     }
//     printf("%d ",sum);
// }


// #include<stdio.h>
// #include<string.h>

// struct Book
// {
//     char name[30];
//     float price;
//     int page_no;
// };
// int main(){
//     struct Book B;
//     strcpy(B.name,"IT ENDS WITH US");
//     B.price=600.98;
//     B.page_no=267;
//     printf("Name of Book is :%s\n",B.name);
//     printf("Price of Book is :%f\n",B.price);
//     printf("Page no in Book is :%d",B.page_no);

// }


#include<stdio.h>
#include<string.h>

typedef struct Animal
{
   char name[20];
   int age;
   int speed;
   char grrade;    
}Animal;
  int main(){
    
     Animal anm[4];
     strcpy(anm[0].name,"Dog");
     anm[0].age=5;
     anm[0].speed=121;
     anm[0].grrade='A';

     strcpy(anm[1].name,"Pooja");
     anm[1].age=23;
     anm[1].speed=10;
     anm[1].grrade='D';

     strcpy(anm[2].name,"Shalu");
     anm[2].age=21;
     anm[2].speed=-1;
     anm[2].grrade='E';

     strcpy(anm[3].name,"Deepak");
     anm[3].age=17;
     anm[3].speed=10;
     anm[3].grrade='F';

     printf(".......ANIMAL DETAILS.......");
     for (int i = 0; i < 4; i++)
     {
        printf("\nName is :%s\n",anm[i].name);
        printf("Age is :%d\n",anm[i].age);
        printf("Speed is :%d\n",anm[i].speed);
        printf("Grade is :%c\n",anm[i].grrade);
     }
     
   

  }
 

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


#include<stdio.h>
#include<string.h>

struct Book
{
    char name[30];
    float price;
    int page_no;
};
int main(){
    struct Book B;
    strcpy(B.name,"IT ENDS WITH US");
    B.price=600.98;
    B.page_no=267;
    printf("Name of Book is :%s\n",B.name);
    printf("Price of Book is :%f\n",B.price);
    printf("Page no in Book is :%d",B.page_no);

}



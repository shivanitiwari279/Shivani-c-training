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

#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int sum=0;
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        sum= sum+arr[i][j];
        
       }
      
    }
    printf("%d ",sum);
}
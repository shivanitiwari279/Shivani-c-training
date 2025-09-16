// #include<stdio.h>
// int main(){
//     for (int i = 0; i <5; i++)
//     {
//         for (int j = 4; j > i; j--)
//         {
//           printf(" ");
//         }
//         for ( int k = 0; k <= i; k++)
//         {
//         printf("*");
//         }
//         for ( int l = 1; l <= i; l++)
//         {
//         printf("*");
//         }
//         printf("\n");
//     }
// }  

// #include<stdio.h>
// int main(){
//     int sum=97;
//     for (int i = 0; i <5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//           printf(" ");
//         }
//         for ( int k = 4; k > i; k--)
//         {
//         printf("%c", sum++);
//         }
//         for ( int l = 4; l >= i; l--)
//         {
//         printf("%c", sum++);
//         }
//         printf("\n");
//     }
    
// }
//#include<stdio.h>
// int main(){
//     for (int i = 0; i <5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//           printf(" ");
//         }
//         for ( int k = 4; k > i; k--)
//         {
//         printf("*");
//         }
//         for ( int l = 4; l >=i; l--)
//         {
//         printf("*");
//         }
//         for (int m = 0; m <= i; m++)
//         {
//           printf("*");
//         }
//         for (int p = 1; p <= i; p++)
//         {
//           printf("*");
//         }
//         printf("\n");
//     }
    
//}

#include<stdio.h>
 int main(){
    for (int i = 0; i <5; i++)    {
        for (int j = 0; j <= i; j++)
        {
          printf(" ");
        }
        for ( int k = 4; k > i; k--)
        {
        printf("*");
        }
        for ( int l = 4; l >=i; l--)
        {
        printf("*");
        }
        for (int m = 0; m <= i; m++)
        {
          printf("*");
        }
        for (int p = 1; p <= i; p++)
        {
          printf("*");
        }
        for (int p = 5; p > i; p--)
        {
          printf("*");
        }
        printf("\n");
    }
    
}
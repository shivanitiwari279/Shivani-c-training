#include<stdio.h>
int main()
{
    for(int i=0 ; i<5 ; i++)
    {
        for(int j = 0 ; j<=i ; j++){
        printf("*");
        }
        for(int k = 3 ; k >= i ; k--){
            printf(" ");
        }
        for(int m = 3 ; m >= i ; m--)
        {
            printf(" ");
        }
        for(int l = 0 ; l<=i ; l++) {
        printf("*") ;
        }
        printf("\n");
    }
       for(int i=0 ; i<5 ; i++)
    {
        for(int j = 3 ; j>=i ; j--){
        printf("*");
        }
        for(int k = 0 ; k<=i ; k++){
            printf(" ");
        }
        for(int m = 0 ; m <= i ; m++)
        {
            printf(" ");
        }
        for(int l = 3 ; l>=i ; l--) {
        printf("*") ;
        }
        printf("\n");
    }
}

// #include<stdio.h>
// int main()
// {
//     int n=10;
//     for (int i =1 ; i<=n ; i++)
//     {
//         for(int j=1 ; j<=n ; j++)
//          if ( i==1 || i==n||j==1 || j==n ){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 8; j > i; j--)
//         {
//           printf(" ");
//         }
//         for (int k = 0; k < i; k++)
//         {
//           printf("*");
//         }
//         for (int l = 0; l <= i; l++)
//         {
//           printf("*");
//         }
//         printf("\n");
//       }
//       for (int i = 0; i < 8; i++)
//     {
//       for (int m = 0; m <= i; m++)
//          {
//           printf(" ");
//         }
//         for (int n = 8; n >i ; n--)
//         {
//             printf("*");
//         }
//         for (int o = 8; o > i; o--)
//         {
//           printf("*");
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){ 
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int brr[3][3];
//     for (int i = 0; i < 3 ; i++)
//     { 
//         for (int j = 0; j < 3; j++)
//         {
//           brr[i][j]=arr[j][i];
//           printf("%d ", brr[i][j]);
          
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){ 
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     int brr[3][2];
//     for (int i = 0; i < 3 ; i++)
//     { 
//         for (int j = 0; j < 2; j++)
//         {
//           brr[i][j]=arr[j][i];
//           printf("%d ", brr[i][j]);
          
//         }
//         printf("\n");
//     }
// }

 #include<stdio.h>
 int main(){ 
    int arr[2][3]={{1,2,3},{4,5,6}};
    for (int i = 0; i < 2 ; i++)
    { 
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
 } 
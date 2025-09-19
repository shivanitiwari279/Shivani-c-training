// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,-3,4,-1};
//     int maxSum=0;

//     for (int i = 0; i < 5; i++)
//     {
//        int currSum=0;
//        for (int j = 0; j < 5; j++)
//        {
//           currSum=currSum+arr[j];
//           if (currSum>maxSum)
//           {
//            maxSum=currSum;
//           }
          
//        }
//     }
//     printf("%d",maxSum);
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,-3,4,-1};
//     int maxSum=0;
//     int currSum=0;

//     for (int i = 0; i < 5; i++){
//         currSum+=arr[i];
//         if (currSum>maxSum)
//         {
//             maxSum=currSum;
//         }
//         if (currSum<0)
//         {
//             currSum=0;
//         }
        
//     }
//     printf("%d",maxSum);
// }

#include <stdio.h>
int main() {
    int a[3] = {10, 20, 30};
    int b[4] = {40, 50, 60, 70};
    int merged[a[3]+b[4]];

    int i;


    for (i = 0; i < a[3] ; i++) {
        merged[i] = a[i];
    }

    
    for (int j = 0; j < b[4] ; j++) {
        merged[i] = b[j];
        i++;
    }

    
    printf("Merged array: ");
    for (int k = 0; k < a[3]+b[4]; k++) {
        printf("%d ", merged[k]);
    }

}
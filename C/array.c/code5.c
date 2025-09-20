//DIFFERENCE OF ODD EVEN

// #include<stdio.h>
// int main(){
//     int arr[6]={2,4,3,5,6,7};
//     int sumEven=0;
//     int sumOdd=0;

//     for (int i = 0; i < 6; i++)
//     {
//         if (i%2==0)
//         {
//             sumEven= sumEven+arr[i];
//         }
//         else{
//             sumOdd= sumOdd+arr[i];
//         }
//     }
//     printf("%d",sumEven-sumOdd);
// }

//SUM EQUAL TO GIVEN NO

#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalpair=0;
    int x=12;
    for (int i = 0; i < 8; i++)
    {
       for (int j = i+1; j < 8; j++)
       {
        if (arr[i]+arr[j]==x)
        {
          totalpair++;
          printf("(%d %d)\n", arr[i], arr[j]);
        }
        
       }
        
    }  
   printf("%d ",totalpair); 
}
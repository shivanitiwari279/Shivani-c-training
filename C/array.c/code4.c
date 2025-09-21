// PRODUCT OF AN ARRAY

// #include<stdio.h>
// int main(){
//     int arr[5]={1,3,6,8,2};
//     int product=1;
//     for (int i = 0; i < 5; i++)
//     {
//         product=product*arr[i];
//     }
//     printf("%d",product);
    
// }


// MAX TERM

// #include<stdio.h>
// int main(){
//     int arr[5]={2,33,4,45,11};
//      int max=1;   //smallest that do not exist in array
//     for (int i = 0; i < 5; i++)
//     {
//         if (max<arr[i])
//         {
//            max=arr[i];
//         }
        
//     }
//     printf("%d", max);
// }

// MIN TERM

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[5]={2,33,4,45,11};
//      int min=INT_MAX;   
//     for (int i = 0; i < 5; i++)
//     {
//         if ( min>arr[i])
//         {
//            min=arr[i];
//         }
        
//     }
//     printf("%d", min);
// }

//ODD-EVEN-INCREMENT

// #include<stdio.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for (int i = 0; i < 10; i++)
//     {
//       if (i%2!=0)
//       {
//         arr[i]=arr[i]*2;
//       }
//       else
//       {
//         arr[i]=arr[i]+10 ;
//       }
//     }
//     for (int i = 0; i < 10; i++){
//       printf("%d ",arr[i]);
//     }
    
    
// }

 //MAX VALUE THAN GIVEN ONE

#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=3;
    for (int i = 0; i < 7; i++)
    {
        if (x<arr[i])
        {
            printf("%d ",arr[i]);
        }
        
    }
    
}
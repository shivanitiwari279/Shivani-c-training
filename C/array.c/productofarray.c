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
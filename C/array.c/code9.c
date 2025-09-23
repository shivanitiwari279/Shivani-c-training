// MAX TERM

#include<stdio.h>
int main(){
    int arr[5]={2,33,4,45,11};
     int max=1;   //smallest that do not exist in array
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
           max=arr[i];
        }
        
    }
    printf("%d", max);
}
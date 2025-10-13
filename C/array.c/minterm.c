// MIN TERM

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={2,33,4,45,11};
     int min=INT_MAX;   
    for (int i = 0; i < 5; i++)
    {
        if ( min>arr[i])
        {
           min=arr[i];
        }
        
    }
    printf("%d", min);
}

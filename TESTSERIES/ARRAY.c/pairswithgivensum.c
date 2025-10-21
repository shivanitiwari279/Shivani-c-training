#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int sum=9;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if(sum==arr[i]+arr[j])
            { 
            
            printf("Pair is :(%d %d)\n",arr[i],arr[j]);
            }

        }
        
    }
    
}
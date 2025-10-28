#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6]={7,1,5,3,6,4};
    int max_prize=0;
    int min=INT_MAX;   
    for (int i = 1; i < 6; i++)
    {
        if ( min>arr[i])
        {
           min=arr[i];
        }
        else
        {
            int profit=arr[i]-min;
            if (profit>max_prize)
            {
                max_prize=profit;
            }
            
        }
        
    }
    
    printf("%d",max_prize);
}

#include<stdio.h>
int main(){
    int arr[5]={1,2,-3,4,-1};
    int maxSum=0;
    int currSum=0;

    for (int i = 0; i < 5; i++){
        currSum+=arr[i];
        if (currSum>maxSum)
        {
            maxSum=currSum;
        }
        if (currSum<0)
        {
            currSum=0;
        }
        
    }
    printf("%d",maxSum);
}

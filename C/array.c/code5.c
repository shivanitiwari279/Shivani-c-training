//DIFFERENCE OF ODD EVEN

#include<stdio.h>
int main(){
    int arr[6]={2,4,3,5,6,7};
    int sumEven=0;
    int sumOdd=0;

    for (int i = 0; i < 6; i++)
    {
        if (i%2==0)
        {
            sumEven= sumEven+arr[i];
        }
        else{
            sumOdd= sumOdd+arr[i];
        }
    }
    printf("%d",sumEven-sumOdd);
}


#include<stdio.h>
int main(){
    int a[5]={1,2,5,7,9};
    int b[5]={2,5,7,11,13};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == b[j]) {
               printf("%d ", a[i]);
            }   
        }
        
    }
}
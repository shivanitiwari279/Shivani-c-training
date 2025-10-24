#include <stdio.h>
int main() {
    int a[4] = {1,3,5,7};
    int b[5] = {0,2,6,8,9};

    for(int i=0;i<4;i++){
        if(a[i]>b[0]){
            int temp = a[i];
            a[i] = b[0];
            b[0] = temp;
            
            // Move b[0] to correct position
            int first = b[0], k;
            for(k=1;k<5 && b[k]<first;k++) 
            {
                b[k-1]=b[k];
            }
            b[k-1]=first;
        }
    }

    printf("Array a: ");
    for(int i=0;i<4;i++)
    {
       printf("%d ", a[i]); 
    } 
    printf("\nArray b: ");
    for(int i=0;i<5;i++) 
    {
        printf("%d ", b[i]);
    }
}
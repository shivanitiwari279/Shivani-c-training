#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));

    printf("Enter %d element:\n",n);
    for (int i = 0; i < n; i++)
    {
      scanf("%d\n",&arr[i]);
    
    }
    
 }
    


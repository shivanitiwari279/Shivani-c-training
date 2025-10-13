#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *arr;
    printf("Enter size: ");
    scanf("%d",&n);
    arr=(int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    
    }
    printf("Enter new size: ");
    int newsize;
    scanf("%d",&newsize);
    arr=(int *)realloc( arr,newsize * sizeof(int));

    printf("Enter %d new element:\n",newsize-n);
    for (int i = n; i < newsize; i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Updated array:\n");
    for (int i = 0; i < newsize; i++)
    {
      printf("%d\n",arr[i]);
    }
    free(arr);
 }
    
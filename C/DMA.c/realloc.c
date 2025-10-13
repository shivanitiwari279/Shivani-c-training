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
    printf("Enter new size: ");
    int newsize;
    scanf("%d",&newsize);
    int *arr=(int *)realloc(arr,newsize * sizeof(int));

    printf("Enter %d new element:\n",newsize-n);
    for (int i = n; i < newsize; i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Updated array:\n");
    for (int i = 0; i < newsize; i++)
    {
      printf("%d",arr[i]);
    }
    free(arr);
 }
    
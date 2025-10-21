#include <stdio.h>
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6; 
    int total = n*(n+1)/2;
    int sum=0;

    for (int i = 0; i < n-1; i++)
    {
        sum += arr[i];
    }
    printf("Missing number is %d\n", total - sum);
    
}
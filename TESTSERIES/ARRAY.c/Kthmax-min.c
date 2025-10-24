#include <stdio.h>
int main() {
    int arr[6] = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int i, j, temp;

    
    for(i = 0; i < 6; i++) {
        for(j = i + 1; j < 6; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Kth minimum element = %d\n", arr[k - 1]);
    printf("Kth maximum element = %d\n", arr[6 - k]);

    return 0;
}
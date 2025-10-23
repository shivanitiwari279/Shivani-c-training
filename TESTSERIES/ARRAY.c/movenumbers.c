#include <stdio.h>
int main() {
    int arr[8] = {2, -3, 5, -1, 6, -4, 7, -2};  
    int i= 0;
    int j = 0;
    int temp;

    for (i = 0; i < 8; i++) {
        if (arr[i] < 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Array after moving negatives to beginning:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

}


#include <stdio.h>

int main() {
    int arr[8] = {2, 3, 5, -1, 6, -4, 7, -2};  
    int left=0;
    int right = 0; 
    int temp;
    int i;
    for (i = 0; i < 8; i++) {
        if (arr[left] < 0) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            right++;
        }
    }

    printf("Array after moving negatives to beginning:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

}
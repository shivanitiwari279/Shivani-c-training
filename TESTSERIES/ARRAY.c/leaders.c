#include <stdio.h>

int main() {
    int arr[6] = {16, 17, 4, 3, 5, 2};
    int maxRight = arr[5];

    printf("Leaders: %d ", maxRight);

    for (int i = 4; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d ", arr[i]);
        }
    }
    
}
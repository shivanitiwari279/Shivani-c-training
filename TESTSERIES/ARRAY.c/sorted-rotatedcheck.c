#include <stdio.h>
int main() {
    int arr[5] = {3, 4, 5, 1, 2};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > arr[(i + 1) % 5])
            count++;
    }

    if (count <= 1)
        {
            printf("Array is sorted and rotated\n");
        }
    else
    {
        printf("Array is not sorted and rotated\n");
    }
    
}
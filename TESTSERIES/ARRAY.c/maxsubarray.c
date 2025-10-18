#include <stdio.h>

int main() {
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int maxSum = arr[0], currSum = 0;

    for (int i = 0; i < 8; i++) {
        currSum += arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
        if (currSum < 0)
            currSum = 0;
    }

    printf("Maximum Subarray Sum = %d\n", maxSum);
    return 0;
}


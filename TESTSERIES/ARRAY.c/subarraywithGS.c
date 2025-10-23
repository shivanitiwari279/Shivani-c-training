#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 7, 5};
    int sum = 12, curr_sum = arr[0], start = 0;

    for(int i=1;i<=5;i++){
        while(curr_sum>sum && start<i-1){
            curr_sum -= arr[start];
            start++;
        }
        if(curr_sum==sum){
            printf("Subarray found from index %d to %d\n", start, i-1);
            //break;
        }
        if(i<5) curr_sum += arr[i];
    }
    
}
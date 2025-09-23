//PALINDROME OR NOT

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4 ,5};
    int i;

    for(i = 0; i < 5/2; i++) {
        if(arr[i] != arr[5 - i - 1]) {
            printf("Not Palindrome\n");
            return 0;   
        }
    }

    printf("Palindrome\n");  
    return 0;
}


#include <stdio.h>
#include<string.h>
int main() {
    char str[] = "abcdbac";
    str[6] = '\0';
    if (str[0] == str[5]) {
        printf("Yes, it's a palindrome.\n");
    } else {
        printf("No, it's not a palindrome.\n");
    }

}
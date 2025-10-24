#include <stdio.h>
int main() {
    int a[4] = {1, 2, 4, 5};
    int b[4] = {2, 3, 5, 6};
    
    printf("Union: ");
    for (int i = 0; i < 4; i++) 
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < 4; i++) {
        int found = 0;
        for (int j = 0; j < 4; j++)
            if (b[i] == a[j]) 
            {
                found = 1;
            }
        if (!found) 
        {
            printf("%d ", b[i]);
        }
    }

    printf("\nIntersection: ");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            if (a[i] == b[j]) {
            printf("%d ", a[i]);
            }   
        }
    }
}
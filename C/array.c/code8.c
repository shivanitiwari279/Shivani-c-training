#include <stdio.h>
int main() {
    int a[3] = {10, 20, 30};
    int b[4] = {40, 50, 60, 70};
    int merged[a[3]+b[4]];

    int i;


    for (i = 0; i < a[3] ; i++) {
        merged[i] = a[i];
    }

    
    for (int j = 0; j < b[4] ; j++) {
        merged[i] = b[j];
        i++;
    }

    
    printf("Merged array: ");
    for (int k = 0; k < a[3]+b[4]; k++) {
        printf("%d ", merged[k]);
    }

}
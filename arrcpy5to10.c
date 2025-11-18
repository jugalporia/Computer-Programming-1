#include <stdio.h>

int main() {
    int source[5] = {10, 20, 30, 40, 50}, dest[10]={0},i,j;

    printf("Original 5-element (source) array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", source[i]);
    }
    printf("\n\n");

    j = 0;

    for (i = 0; i < 5; i++) {
        dest[j] = source[i];
        j = j + 2; 
    }

    printf("Copied 10-element (destination) array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
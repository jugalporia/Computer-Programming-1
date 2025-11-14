#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4}, i;
    int *ptr[4]; 

    for (i=0; i<4; i++) {
        ptr[i] = &arr[i];
    }

    printf("Printing values via the array of pointers:\n");
    for (i=0; i<4; i++) {
        printf("%d\n", *ptr[i]);
    }
    
    return 0;
}
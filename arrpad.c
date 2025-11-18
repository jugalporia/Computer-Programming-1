
#include <stdio.h>
#include <stdlib.h> // Needed for malloc and free

int main() {
    int n, N, padnum;
    char dir;

    printf("Enter size of array (along with padding spaces):\n");
    scanf("%d", &n);

    // Validate array size
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Dynamic memory allocation for the array
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter number of elements you want to insert in array:\t");
    scanf("%d", &N);

    // Validate number of elements
    if (N > n) {
        printf("Number of elements cannot be greater than array size.\n");
        free(arr);
        return 1;
    }

    printf("Enter %d values:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize remaining spaces to 0 (optional but good practice)
    for (int i = N; i < n; i++) {
        arr[i] = 0;
    }


    // Consume the newline character left in the buffer by previous scanf
    getchar(); 

    printf("Enter direction (R or L):\t");
    scanf("%c", &dir);

    printf("Enter padding number (shift amount):\t");
    scanf("%d", &padnum);

    // Validate shift amount
    if (padnum < 0) {
         printf("Invalid shift amount.\n");
         free(arr);
         return 1;
    }
    if (padnum >= n) {
        // If shift is greater than or equal to size, all becomes 0
        for(int i=0; i<n; i++) arr[i] = 0;
    } else {
        switch (dir) {
            case 'R':
            case 'r':
                // Right Shift: Move elements from end to start to avoid overwriting
                for (int i = n - 1; i >= padnum; i--) {
                    arr[i] = arr[i - padnum];
                }
                // Pad the beginning with 0
                for (int i = 0; i < padnum; i++) {
                    arr[i] = 0;
                }
                break;

            case 'L':
            case 'l':
                // Left Shift: Move elements from start to end
                for (int i = 0; i < n - padnum; i++) {
                    arr[i] = arr[i + padnum];
                }
                // Pad the end with 0
                for (int i = n - padnum; i < n; i++) {
                    arr[i] = 0;
                }
                break;

            default:
                printf("Invalid direction.\n");
                break;
        }
    }

    printf("The padded array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
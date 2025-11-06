#include <stdio.h>

void findMaxMin(int arr[], int size, int *maxVal, int *minVal) {

    if (size <= 0) {
        return;
    }
    *maxVal = arr[0];
    *minVal = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] > *maxVal) {
            *maxVal = arr[i];
        }
        if (arr[i] < *minVal) {
            *minVal = arr[i];
        }
    }
}

int main(void) {
    
    int numbers[] = {45, 12, 78, -10, 300, 5, 23}, min, max;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    findMaxMin(numbers, size, &max, &min);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
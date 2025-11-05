#include <stdio.h>

int main() {
    int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int size;
    int position; 
    int i;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0) {
        printf("Invalid size. Must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nEnter the position (index) of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", size - 1);
        return 1;
    }

    for (i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("\nArray after deleting element at position %d:\n", position);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
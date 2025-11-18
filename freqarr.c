#include <stdio.h>

int main() {
    int arr[10];
    int freq[10];
    int i, j, count;

    printf("Enter 10 elements for the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }

    for (i = 0; i < 10; i++) {

        if (freq[i] == 0) {
            continue;
        }

        count = 1;

        for (j = i + 1; j < 10; j++) {
            
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        freq[i] = count;
    }

    printf("\n--- Element Frequencies ---\n");
    for (i = 0; i < 10; i++) {

        if (freq[i] != 0) {
            printf("Element %d appears %d time(s)\n", arr[i], freq[i]);
        }
    }

    return 0;
}
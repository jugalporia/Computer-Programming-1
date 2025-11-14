
#include <stdio.h>
#include <string.h>

int main() {
    char string[3][200] = {"Hello ", "World", " !"};
    char *arr[3];
    arr[0] = string[0];
    arr[1] = string[1];
    arr[2] = string[2];
    char **ptr4;
    ptr4 = arr;
    printf("Printing strings using the double pointer:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s", *(ptr4 + i));
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main(void) {
    int num = 42, *ptr1;
    ptr1 = &num;
    int **ptr2;
    ptr2 = &ptr1;

    printf("Via double pointer (**ptr2): %d\n", **ptr2);

    return 0;
}

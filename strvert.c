#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\nHere is the string vertically:\n");
    
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
    char string[] = "Hello World!";
    int i, len = strlen(string);
    char *ptr = NULL; 

    for (i = 0; i <= (len / 2); i++) {
        ptr = &string[i];
    }

    printf("This is the rest of the string after the middle character:\n");

    for (; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    
    printf("\n");
    return 0;
}
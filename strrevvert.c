#include <stdio.h>
#include <string.h> 

int main(void) {
    char str[100];
    int length;
    int i, j;
    char c; 

    printf("Enter a string to reverse: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    
    //swap loop
    for (i = 0, j = length - 1; i < j; i++, j--) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }

    printf("The reversed string is: %s\n", str);
    printf("\n");
        for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }


    return 0;
}